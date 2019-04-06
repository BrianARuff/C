// in bash you can pipe output from one command to another. For example, pipe the out from ls -l to the input of wc -l
// wc returns the line count, word count, and byte count of a file given... the -l means just line count.
// wc: -l: open: No such file or directory
// Brians-iMac:enum brianruff$ wc enum.c
//       15      45     328 enum.c
// Brians-iMac:enum brianruff$ wc -l enum.c
//       15 enum.c
// we are able to to call the wc on the ls command using the pipe system call allowing us to count the number of files in the current directory.
// https://unix.stackexchange.com/questions/157285/why-does-ls-wc-l-show-the-correct-number-of-files-in-current-directory/157289
// wc linux man page for wc https://linux.die.net/man/1/wc

// pipe() creates a one way data flow for interprocess communication, in short, it's how different processes can talk to one another. It returns a file descriptor array with 2 items in it. The first item (fd[0]) is the read end of the pipe, while the second item (fd[1]) is the write end of the pipe. Data that's written to the write end of the pipe is buffered by the kernel until it is ready to be read from the read end of the pipe.
// https://linux.die.net/man/2/pipe

// the write command takes up to 3 arguments
    // 1. int file_descriptor
    // 2. const void *buffer_pointer
    // 3. int number_of_bytes
// The write() fnc will write n_number_of_bytes from the buffer pointer to the file assocaited with the open file descriptor (file_descriptor)
// if the nbytes is 0 bytes an error will return
// it will increment the file_descriptor by the number of bytes written to it.

// The read() fnc takes up to 3 arguments
    // 1. int fd // the file descriptor open
    // 2. void *buffer_pointer // pointer to the buffer of write end
    // 3. int nbytes // number of total bytes read
// The read function will attempt to read nbytes from the open fd into the buffer.
// if byte size is 0 then an error is thrown
// the read begins at the position in the fd given by the file offset associated with the fd. The file offset shall be incremented by the num of bytes actually read.
// if no pipe() is open then read() will return 0 to indicate the end-of-file

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    char buf[128];

    // fd[0] will be the read end of the pipe
    // fd[1] will be the write end of the pipe
    int fd[2];

    // Create the pipe and populate `fd`
    pipe(fd);

    // This is where you'd fork() if you want to do
    // interprocess-communciation.
    // fork();

    // Send data down the pipe
    int bytes_written = write(fd[1], "Hello, world!\n", 14);

    if (bytes_written == -1) {
        perror("write");
        exit(1);
    }

    // Read data from the pipe
    int bytes_read = read(fd[0], buf, sizeof buf);

    // Write the data to the screen
    write(STDOUT_FILENO, buf, bytes_read);

    return 0;
}

// when a process dies(finishes) it becomes a zombie process until the parent calls wait().
// 1. run the code
// 2. press return and go to sleep
// 3. go to another shell and run ps al to list the process table
// 4. the ./fork entry is the parent process. In the STAT column you'll see S for sleep
   // the (fork) entry is the child process, which is a zombie (indicated by the parens). It has Z for its STAT entry.
   // You can also see the child's PPID (parent pid) is the same as the parent's PID of the child.
// 6. press enter again to cause wait() to run and "reap" the zombie process
// 7. in another shell run ps al again
// 8. the zombie process will not be gone since the wait() function reaped it
// 9. press enter again to exit the program
// 10. ps al one more time to see that the parent process has been reaped