#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>

int main()
{
    pid_t pid = fork();

    if (pid == 0) {
        printf("IN CHILD\n");
        exit(3);
    } else {
        printf("IN PARENT\n");

        printf("Press ENTER to wait\n");
        getchar(); // key event

        // wait(NULL);

        printf("Press ENTER to exit\n");
        getchar(); // key event
    }
}