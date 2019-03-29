#include <stdio.h>
#include <stdbool.h>

int main()
{
    enum gender {male, female, other, a, b, c};
    enum gender myGender;
    enum gender anotherGender;
    bool isMale = false;
    myGender = male;
    anotherGender = female;
    isMale = myGender != anotherGender;
    char _ = '\n';
    printf("%c", _);
    return 0;
}