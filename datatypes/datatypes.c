#include <stdio.h>

int main()
{
    int age = 30;
    float brian = 30.1f;
    double brian2 = 30.100000000000e+11;
    _Bool boolVariable = 1; // true
    _Bool boolVariable2 = 0; // false
    short int x = 0; // less storage than an int and is short for "short int"
    long int xx = 0e+11; // larger than normal int w/o decimals.
    long long int xxx = 1e+256;
    printf("%lli", xxx);
    // signed means it can be neg and positive or 0.
    // unsigned can only be 0 or positive.
    return 0;
}