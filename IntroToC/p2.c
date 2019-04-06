#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h> // pid_t

int main()
{
    int x = 12;
    
    pid_t pid = fork(); // takes the current, copies it into 2 identical copies and each copy has it's own local variables --> creates parent and child processes...
    
    if(pid == 0) {
        printf("In the child and my pid is %d %d\n", getpid(), getppid()); // gets parent process id...
    } else {
        printf("In the parent, and my pid is %d\n", getpid());
        wait(NULL);
    }
    return 0;
}