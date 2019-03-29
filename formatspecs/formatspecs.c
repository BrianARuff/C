#include <stdio.h>
#include <stdbool.h> // use bool in C-99

int main()
{
    int iv = 100;
    float fv = 3.14;
    double dv = 3.14e+11;
    char cv = 'a';
    _Bool bv = 0;
    bool bv2 = false;
    printf("Integer %i\nFloat %f\nDouble %e\nChar %c\nBoolean %i\nBoolean2 %i\n ", iv, fv, dv, cv, bv, bv2);
    return 0; 
}