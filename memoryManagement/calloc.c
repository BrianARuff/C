#include <stdio.h>
#include <stdlib.h>

int main()
{
    // *** Calloc ***
    // similar to malloc with a couple of advantages
    // it allocates mem as a number of elements of a given size
    // it inits mem that is allocated so that all bytes are set to zero
    // always initialize data!!
    // takes 2 args
        // number of items for which space is required
        // the size of each data item
    // stdlib.h file
    int pnum = (int*)calloc(75, sizeof(int)); // much cleaner IMO :), he agrees too :))
    // all ints in pnum is set to zero
}