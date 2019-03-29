#include <stdio.h>

int main()
{                                          // skip to 10
    enum Company {GOOGLE, FACEBOOK, XEROX, YAHOO=10, EBAY, MICROSOFT};
    enum Company xerox = XEROX;
    enum Company google = GOOGLE;
    enum Company ebay = EBAY;
    printf("%i\n", xerox);
    printf("%i\n", google);
    printf("%i\n", ebay);
    return 0;
}