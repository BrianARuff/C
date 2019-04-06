#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>

int main(void)
{
    pid_t pid = fork();

    if (pid == 0) {
        printf("child: exiting with status 7\n");
        exit(7); // <-- exit status 7
    } else {
        int status;
        wait(&status);

        if (WIFEXITED(status)) { // if child finished properly
            printf("parent: child exited with status %d\n", WEXITSTATUS(status));
        } else {
            printf("parent: child killed by signal, crashed, or stopped\n");
        }

    }

    return 0;
}