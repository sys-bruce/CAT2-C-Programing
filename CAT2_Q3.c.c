//Programm requesting the user to enter hours worked in a week and the hourly wage
/*
application to print the gross pay,the taxes and the net pay
Author:Loren Bruse 0chieng
Reg no:CT101/G/21905/24
Date:07/11/2024
*/

#include <stdio.h>

int main() {
    float hours, hourly_wage, gross_pay, taxes, net_pay;
    
    // Hours worked and Hourly wage input
    printf("Enter hours worked in a week: ");
    scanf("%f", &hours);
    
    printf("Enter hourly wage: ");
    scanf("%f", &hourly_wage);
    
    // Gross pay workout
    if (hours > 40) {
        gross_pay = (40 * hourly_wage) + ((hours - 40) * hourly_wage * 1.5);
    } else {
        gross_pay = hours * hourly_wage;
    }
    
    // Taxes workout
    if (gross_pay <= 600) {
        taxes = gross_pay * 0.15;
    } else {
        taxes = (600 * 0.15) + ((gross_pay - 600) * 0.20);
    }
    
    // Net pay workout
    net_pay = gross_pay - taxes;
    
    // Results print out
    printf("Gross Pay: $%.2f\n", gross_pay);
    printf("Taxes: $%.2f\n", taxes);
    printf("Net Pay: $%.2f\n", net_pay);
    
    return 0;
}
