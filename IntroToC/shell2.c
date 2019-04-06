#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <string.h>

int main()
{
    char line[20];

    while(1){
        printf(">>$ "); fflush(stdout);
        
        // 1 == line to read, 2 == size of line read, 3 == where to get line from (console/terminal)
        fgets(line, sizeof(line), stdin); // get data from standard input

        // strip new line char off end
        line[strlen(line)-1] = '\0';

        if(strcmp(line, "exit") == 0) {
            break;
        }

        pid_t pid = fork();

        if(pid == 0){
            if(strcmp(line, "c") == 0) {
                execlp("clear", "clear", NULL);
                perror("exec");
                exit(1);
            }
            execlp(line, line, NULL);
            perror("exec");
            exit(1);
        } else {
            wait(NULL);
        }
    }
    return 0;
}