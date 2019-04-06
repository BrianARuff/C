// #include <string.h>

// int main(int argc, char const *argv[])
// {
//     char *p;
//     p = (char *)malloc(6); // 6 bytes, enough for "hello" + '\0'
//     strcpy(p, "hello");
//     printf("%s\n", p);
//     free(p);
//     p = NULL;
//     return 0;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct animal
{
    char *name;
    int legCount;
};

struct animal *create_animal(char *name, int legCount)
{
    // setting aside enough memory for the entire struct of animal
    struct animal *a = malloc(sizeof(struct animal));
    // accessing 'name' property, and assigning enough memory to hold the size of name in bytes plus 1 (for the null terminator)
    a->name = malloc(sizeof(name) + 1);
    // assigning the value of name to 'name' property
    strcpy(a->name, name);
    a->legCount = legCount;
    return 0;
}

void free_animal(struct animal *a)
{
    // name pointer
    free(a->name);
    // struct pointer
    free(a);
}

void set_animal_name(struct animal *a, char *name)
{
    // free up the name pointer on the struct passed in
    // deleting the old value of name
    free(a->name);
    // setting aside memory for 'name' prop on the animal struct that is passed the function as an argument
    a->name = malloc(sizeof(name) + 1);
    // set new name
    strcpy(a->name, name);
}

int main()
{
    struct animal *goat; // we init the goat struct w/o value
    goat = create_animal("goat", 4); // assign the value
    printf("Name: %s, Legs: %d\n", goat->name, goat->legCount);
    free_animal(goat); // removes all allocated memory for animal struct
    return 0;
}