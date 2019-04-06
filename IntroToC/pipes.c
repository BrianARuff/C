#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main()
{
    pid_t pid;
    int mypipefd[2];
    int ret;
    char buf[14];

    ret = pipe(mypipefd);

    if(ret == -1)
    {
        perror("Pipe error");
        exit(-1);
    }

    pid = fork();

    if (pid == 0)
    {
        printf("Hey, I'm in the CHILD process!!\n");
        write(mypipefd[1], "Hello, World!", 14);
    } else {
        printf("Hey, I'm in the PARENT process\n");
        read(mypipefd[0], buf, 14);
        printf("%s\n", buf);
        wait(NULL); // wait to reap the child
    }

    return 0;
}