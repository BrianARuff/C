#include <string.h>

// 198  p (value 200)
// 199
// 200 h   ---- malloc'd space starts here
// 201 e
// 202 l
// 203 l
// 204 o
// 205 \0  ---- malloc'd space ends here
// 206
// 207

int main(void)
{
    char *p;

    p = malloc(6); // 6 bytes, enough for "hello" plus the '\0' terminator

    strcpy(p, "hello");

    free(p); // One free for every malloc
    char s[9] = "asdfasdf";
    printf("%s\n", s);
    return 0;
}