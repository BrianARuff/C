#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>

int main()
{
    pid_t pid = fork();

    if(pid == 0){
        execl("/bin/ls", "ls", NULL);
        execlp("ls", "ls", NULL);
        perror("exec");
        exit(1);
    } else {
        wait(NULL);
    }
}