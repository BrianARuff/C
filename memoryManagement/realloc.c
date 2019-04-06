#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // *** Realloc ***
    // reallocate memory previously used by calloc or malloc dynamically while the program is running.
    // 2 args
        // pointer with address returned by call to malloc or calloc
        // the size in bytes of the new memory that you want allocated
    // allocates the ammount of mem to the size of the 2nd argument
        // xfers the contents of the prev allocated mem referenced by the pointer you passed in as the first arg to the newly allocated memory.
        // return a void* pointer to the new mmeory or NULL is the operation should fail for some reason
    // the most important feature of this operation is that realloc preserves the contents of the original memory area.
    
    char *str;
    // init mem allocation
    str = (char*)calloc(5, sizeof(char));
    strcpy(str, "Brian");
    printf("String = %s, Address = %s\n", str, str);

    // reallocate memory
    str = (char*)realloc(str, 10); // casted to char pointer b/c it returns a void pointer
    strcat(str, " Ruff");
    printf("String = %s, Address = %s\n", str, str);

    // free memory
    free(str);
    str = NULL;
    return 0;
}
