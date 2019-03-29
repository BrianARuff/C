#include <stdio.h>

int main()
{
    // unsigned int a = 60; // 0011 1100
    // unsigned int b = 13; // 0000 1101
    //                      // 0000 0011 == 3 (b >> 2)
    //                      // 0011 0100 == 52 (b << 2)
    //                      // 0011 1101 == 61 (|)
    //                      // 0000 1100 == 12 (&)
    // unsigned int result = 0;
    // result = b >> 2;
    // printf("Result %i\n", result);
    char s = 's'; // char code of 115
    int s2 = (int)s; // type casting char to int, same as ==> s2 = 115
    // sizeof is an operator, and is compiled at compilation time, not run time, unless it is used as an assignment to a variable.
    int intSize = sizeof(int); // 4
    char *i = 'i'; // * before variable means it's a pointer star.
    // ? : ==> ternary operator
    return 0;
}