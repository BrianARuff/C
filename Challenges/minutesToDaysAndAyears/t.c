#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main()
{
	long unsigned int minutes;
	printf("Enter the number of minutes: ");
	scanf("%lu", &minutes);
	double minutesInOneYear = 60 * 24 * 365; // non leap year...
	double minutesToYears; 
	double minutesInDays;
	minutesToYears = minutes / minutesInOneYear;
	minutesInDays = (minutesToYears) * 365;
	printf("1. %.2f years\n", minutesToYears);
	printf("2. %.2f days\n", minutesInDays);
	return 0;
}


