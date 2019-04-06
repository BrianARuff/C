#include <stdio.h>

int main()
{
    // you use the indirection operator "*" to access the variable pointed to by a pointer
        // also referred to as the dereference operator b/c u use it to dereference a pointer
    // int num = 15;
    // int *pnum = &num;
    // int result = 0;
    // the pointer var contains the address of the varaible "num"
        // you can use this in an expression to calculate a new value for result
    // result = *pnum + 5;
    // <!---***----!>
    // int count = 100;
    // int x;
    // int *integer_pointer;
    // integer_pointer = &count;
    // x = *integer_pointer;
    // printf("Count == %d, x = %d, integer_pointer == %p\n", count, x, integer_pointer);
    // printf("Count == %d, x = %d, integer_pointer == %p\n", count, x, (void*)&integer_pointer);
    // int *zzz = NULL;
    // printf("Size %lu bytes\n", sizeof(zzz));
    // <!----***----!>
    int num = 0;
    int *pnum = NULL;
    num = 10;
    printf("num address == %p\n", &num);
    printf("pnum address == %p\n", &pnum);
    printf("pnum value == %p\n", pnum);
    pnum = &num;
    printf("pnum address after reassignment to num == %d\n", *pnum);
    printf("num == %i\n", *pnum);
    printf("size of pnum dereferenced == %lu\n", sizeof(*pnum));
    return 0;
}
