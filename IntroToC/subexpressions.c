#include <stdio.h>

int main()
{
    int x = 2;
    float y = 3.14;
    float x2 = x + 5.2;
    printf("%f\n", x2);
    char *name = "Brian";
    char arr[] = {'B', 'r', 'i', 'a', 'n', '\0'};
    printf("%c\n", *name);
    return 0;
}