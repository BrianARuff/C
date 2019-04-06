#include <stdio.h>

int main()
{
    // defining pointers - a pointer is nothing more than a variable that points to a memory address that contains a value.
    // pointer syntax
        // need to specify the type of the variable the pointer points to
        // diff variable types take up different amounts of storage
        // some pointer operations require knowledge of that storage size
    // you declare a pointer to a variable type int with:
        // int *pnum;
    // char pointer
        // char *pcharacter;
    // floater pointer
        // float *pfloatingPointNumber
    // space between * and pointer name is optional
        // devs use the space in declarations and omit it when dereferencing a variable
        // things u can do with ints u can't do with pointers and vice versa
            // u can multiple 2 ints but not 2 pointers together
    // pointer is a new type, not an integer type
        // format spec is the %p specifier
    // u should always initialize a pointer when you declare it!!
    // you can point to NULL to make the pointer point to nothing
    // int *pointerToNull = NULL; // equivalent of a zero for a pointer, NULL doesn't point to any location in memory and avoids buffer over flow, thus limiting possible errors or developer mistakes.
    // if you want to init your var with the address of a var you have already declared then use the address-of operator prior to the variable (&variableName);
    // if you want to init your var with the address of a var you already declared then use the & operator.
    // use names that begin with p when naming pointer variables.
    // int num = 99;
    // int *pnum = &num;
    // printf("%p\n", pnum);
    // printf("%d\n", *pnum);
    
    return 0;
}