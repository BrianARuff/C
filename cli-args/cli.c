#include <stdio.h>

int main(int argc, char *argv[])
{
    // command line arguments...
    // printf("Argument Count: %i", argc);
    // printf("Argument Vector: %p", argv);
    int numOfArgs = argc;
    char *argument1 = argv[0];
    char *argument2 = argv[1];
    printf("Num of Args: %d\n", numOfArgs);
    printf("Program Name: %s\n", argument1);
    for(int i = 1; i < argc; i++){
        printf("%s\n", argv[i]);
    }
    return 0;
}