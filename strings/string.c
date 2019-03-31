#include <stdio.h>
#include <string.h>

// #define PI 3.14

int main()
{
    // double quotes is a string literal
    // single quote is a char
    // char* str = "\\""";
    // printf("%s\n", str);
    // // null character is at the end of a string
    // // null character == '\n'
    // // len of string is 1 greater than len of string
    // // NULL is a symbol that represents a memory address that doesn't reference anything, and is used with pointers, and is not the same as '\0'
    // printf("Hello \0 world\n"); // stops out put to stdout at the \0 in the string.
    // char str[] = {'H', 'e', 'l', 'l', 'o'};
    // printf("%s\n", str);
    // char* str2 = "Hello";
    // printf("%s\n", str2);
    // printf("%.2f\n", PI); // string constant
    // printf("Len == %d\n", strlen("Brian"));
    // strncpy is safer than strcpy because strncpy checks for max size
    // char s[] = "My name is Brian";
    // char temp[50];
    // strcpy(temp, s);
    // printf("Length is %lu\n", strlen(s));
    // printf("New string is %s\n", temp);
    char fn[50]; char ln[50];
    strncpy(fn, "Brian ", 6);
    strncpy(ln, "Ruff", 5);
    char* fullName = strncat(fn, ln, sizeof(fn) + sizeof(ln));
    printf("%d\n", strlen(fullName));
    puts(fullName);
    return 0;
}