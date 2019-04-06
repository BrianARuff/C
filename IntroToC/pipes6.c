#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
    char buf[20];

    // fd[0] == read end of the pipe
    // fd[1] == write end of pipe
    int fd[2];

    // create the pipe with fd as file descriptor
    pipe(fd);

    // send data down the pipe... aka write data
    int bytes_written = write(fd[1], "Hello World!\n", 14);

    if (bytes_written <= 0) {
        perror("write error");
        exit(1);
    }

    int bytes_read = read(fd[0], buf, sizeof(buf));

    // printe data to screen
    write(STDOUT_FILENO, buf, bytes_read);


}