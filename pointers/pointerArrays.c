#include <stdio.h>

int main(int argc, char const *argv[])
{
    // common use of pointers in C is pointers to arrays
    // program efficiency and notational convience
    // pointers to arrays result in code that uses less memory and executes faster
    // int vals[100] = {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1};
    // printf("Size %i\n", sizeof(vals)/sizeof(vals[0]));
    // int *pvals = vals; // or int *pvals = &vals[0];
    // printf("%p\n", pvals); // points to first value in vals...
    // for(int i = 0; i < sizeof(vals)/sizeof(vals[0]); i++)
    // {
    //     *(pvals + i) = *(pvals + i) + 5; // or pvals[i] = pvals[i] + 5;
    // }
    // printf("%d\n", *pvals);
    
    return 0;
}
