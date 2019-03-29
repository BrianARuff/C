#include <stdio.h>

int main()
{
    long double celcius;
    printf("Enter temperature degrees in celsius: ");
    scanf("%Lf", &celcius);
    long double fahrenheit = (celcius * (9/5)) + 32;
    printf("%Lf", fahrenheit);
    return 0;
}