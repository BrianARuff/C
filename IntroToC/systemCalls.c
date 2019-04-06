// linux man page
// fork
// #include <unistd.h>
#include <stdlib.h>
#include <string.h> // perror()
#include <stdio.h> // exit()
#include <unistd.h> // fork()
#include <sys/wait.h> // wait()
// pit_t fork(void); --> example usage

// fork creates a new process by duplicating the calling process. The new process is referred to as the child, it is an exact duplicate of the calling (parent) process except for the following points...
    // the child process has its own process ID, and is unique
    // the child's parent process ID is the same as the prent's process ID
// fork() returns (on success) returns the child process id to the parent, and a 0 is returned to the child. On failure, a -1 is returned in the parent, no child process is created, and errno is set appropriately.
// execl can execute a command in the current process that is running
// afer execl or execlp run the wait() function in the parent process

int main()
{
    pid_t childPIDorZero = fork();
    if (childPIDorZero < 0) {
        perror("fork() error");
        exit(-1); // leave program
    }
    if (childPIDorZero != 0) {
        // in parent process
        printf("In parent process\n");
        printf("Parent PID %d\n", getpid()); // getpid() == parent pid
        printf("Child PID %d\n", childPIDorZero); // is the child pid when in parent process
        wait(NULL); // wait for child process to join with the parent process
    } else {
        printf("----****----****\n");
        printf("In the child process\n");
        printf("Parent PID %d\n", getppid()); // getppid() == parent pid of child process (aka the currently running process)
        printf("Child PID %d\n", getpid()); // getpid() == child pid
        execl("/bin/echo", "echo", "I love music.\n", NULL);
    }
    return 0;
}