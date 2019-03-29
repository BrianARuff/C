#include <stdio.h>

// #define PAYRATE 12.00
// #define TAXRATE_300 0.15

int main()
{
    // pay rate, pay and hours variables
    long double baseRate = 37.00;
    long double overTimeRate = baseRate * 1.5;
    long double hoursOver40;
    long double grossPay;
    long double netPay;

    // tax variables
    long double taxes;
    long double taxRate300 = 0.15;
    long double taxRate150 = 0.20;
    long double taxRateRest = 0.25;

    // user input area
    long double hoursWorked;
    printf("Hours worked: ");
    scanf("%Lf", &hoursWorked);

    // gross pay area
    if (hoursWorked <= 40 && hoursWorked > 0)
    {
        grossPay = baseRate * hoursWorked;
    }
    else if (hoursWorked > 40)
    {
        hoursOver40 = hoursWorked - 40;
        grossPay = (overTimeRate * hoursOver40) + (baseRate * 40);
    }
    else
    {
        printf("You did not work any hours. \nYou entered %.2Lf hours. \nYou must enter a value greater than 0 hours.\n\n", hoursWorked);
        return 0;
    }

    // net pay area
    if (grossPay > 450)
    {
        // if they made more than 450 then all 3 taxes apply
        taxes = 300 * taxRate300; // first 300
        taxes += 150 * taxRate150; // next 150
        taxes += (grossPay - 450) * taxRateRest; // the rest...
    }
    else if (grossPay > 300 && grossPay <= 450)
    {
        // 2 tax brackets
        taxes = 300 * taxRate300; // first 300
        long double tempgrossPay = grossPay;
        tempgrossPay -= 300;
        taxes += tempgrossPay * taxRate150; // next 150
    }
    else
    {
        // 1 tax bracket (made less than 300)
        taxes = grossPay * taxRate300; // first 300
    }

    netPay = grossPay - taxes;

    // print net pay and end program
    printf("Gross pay %.2Lf\n", grossPay);
    printf("Taxes %.2Lf\n", taxes);
    printf("Your net pay is $%.2Lf\n", netPay);

    return 0;
}

// latest challenge --> check pay