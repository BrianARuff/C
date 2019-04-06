#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>

int main(void)
{
    // Add this later and explain that both the parent and
    // child have their own copies of `x`:
    int x = 12;

    pid_t pid = fork();

    if (pid == 0) {
        printf("I'm the child!\n");
    } else {
        printf("I'm the parent!\n");
    }

    return 0;
}