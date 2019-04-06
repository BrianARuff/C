#include <stdio.h>
#include <stdlib.h>

int main()
{
    // @@@***---Malloc---***@@@ //
    // easiest way to allocate dynamic memory is with malloc().
    // requires the stdlib.h file
    // you specify the number of bytes of memory that you want allocated as the argument
    // return the address of the first byte of memory that it allocated
    // because you get an address returned, a pointer is the only data type to assign it to.
    int *pnum = (int*)malloc(100);
    // pnum is requesting 100 bytes of memory and gets assigned the address of mallocs memory address
    // it can hold 25 ints, (100/4)==25... each int byte is 4 bytes
    // assumes that type int requires 4 bytes... doesn't work on diff systems
    int *pnum2 = (int*)malloc(25 * sizeof(int));
    // the arg in malloc() is assigning 25 ints or 25 * 4 bytes (100 bytes) to work with
    // the (int*) is converting the address returned by the function of type pointer to type int
        // malloc returns a pointer of type pointer of type void, so you need to cast it to the variable type it's being assigned to.
    // you can request any number of bytes, but has system limitations, and returns a value of NULL when it does.
    if (!pnum)
    {
        perror("Memory is not allocated");
        exit(1); // exit the program, you are out of memory and will crash, so leave while you can :-P!!
    }
    // always release memory after you done using it using the "free()" function.
    // a memory leak occurs when you lose reference to a variable, but you lose reference to the pointers address. Usually happens within loops due scoping problems.
    free(pnum);
    // the free() fnc has requires an arg, but can be of any type as it takes in type void*, so any argument type will work and be freed from memory (the heap).
    // after the pointer has been freed you should always set it to NULL to show that the pointer no longer points to anything
    pnum = NULL;
    return 0;
}
