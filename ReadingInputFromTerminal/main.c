#include <stdio.h>

int main(int argc, char *argv[]) {
    char str[100];
    int i;
    printf("Enter a value: ");
    scanf("%d", &i);
    printf("%d", i);
    printf("%d\n", i);
    printf("%lu\n", sizeof(str));
    return 0;
}