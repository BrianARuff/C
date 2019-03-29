#include <stdio.h>

int main()
{
    printf("Int %lu bytes\n", sizeof(int));
    printf("Char %lu bytes\n", sizeof(char));
    printf("Long %lu bytes\n", sizeof(long));
    printf("Long Long %lu bytes\n", sizeof(long long));
    printf("Double %lu bytes\n", sizeof(double));
    printf("Long Double %lu bytes\n", sizeof(long double));
    printf("Char pointer %lu bytes\n", sizeof(char *));
    printf("Void %lu bytes\n", sizeof(void));
    printf("Void pointer %lu bytes\n", sizeof(void*));
    printf("Int pointer %lu bytes\n", sizeof(int*));
    char xxx;
    int x = (int)xxx;
    printf("Char pointer casted to an Int %lu bytes\n", sizeof(x));
    char name[] = "Brian";
    printf("%lu\n", sizeof(name));
}