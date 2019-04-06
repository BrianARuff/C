// indirection - ability to reference something using a name, reference, or container instead of the value itself.
// a pointer provides an indirect means of accessing the value of a particular data item.
// It's value is the address of another location in memory that can contain a value.
// Pointers in C is one of the most powerful tool in C.
// every pointer is associated with a specific variable type.
// it can be used only to point to variables of that type.
// pointers of type pointer-to-int can point only to variables of type int
// pointers of type pointer-to-float can only point to variables of type float

#include <stdio.h>

int main()
{
    // int num = 99; // num == 99;
    // int *pnum = &num; // *pnum == 0x7ffee4094638
    // printf("%p\n", pnum); // 0x7ffee4094638 --> memory address of num which is now 100
    // int num2 = 100; // num2 == 100
    // num = 100; // num == 100, *pnum now points to the memory address of 100
    // printf("%p\n", pnum); // 0x7ffee4094638 --> memory address of num which is now 100
    // printf("%d\n", *pnum); // 100 --> value of 100 --> dereferenced pnums address
    // printf("%d\n", num2); // 100 --> value 100
    // printf("%p\n", num2); // 0x64 --> address of 100
    return 0;
}

// why use pointers?
// Only using variables is very limiting in C.
// with pointers you can access any location and perform math with pointers.
// pointers in C make it easier to use arrays and string in C.
// can also save space by being able to share components in your data structures
// pointers allow functions to modify data passed to them as variables
// pass-by-reference == passing argumnets to functions in a way they can be changed by the function
// can also be used to optimize a program to run faster or use less memeory than it would otherwise
// pointers allow us to get multipel value from the function
// a function can only return 1 value but by passing arguments as pointers we can get more than one value from the pointer by changing the pointer via dereferening it
// pointers allow dynamic memory to be created according to the program needs which saves memeory from static (compile time) declarations.
// pointers allows us to design more complex data structures like a stack, queue, or a liked list.
