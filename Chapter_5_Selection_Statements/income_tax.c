//Chapter 5 Programming Project #5 from King's Modern C
//Write a program that asks the user to enter the amount of taxable
//income, then displays the tax due

#include <stdio.h>

int main(void)
{
    float income;
    printf("Enter amount of taxable income: ");
    scanf("%f",&income);

    if(income<750){
        printf("tax due: $%.2f",income * .01);
    } else if(income>=750&&income<=2250){
        printf("tax due: $%.2f", 7.50f + (income - 750) * .02);
    } else if(income>2250&&income<=3750){
        printf("tax due: $%.2f",37.50f + (income - 2250) * .03);
    } else if(income>3750&&income<=5250){
        printf("tax due: $%.2f",82.50f + (income - 3750) * .04);
    } else if(income>5250&&income<=7000){
        printf("tax due: $%.2f",142.50f + (income - 5250) * .05);
    } else {
        printf("tax due: $%.2f",230.00f + (income - 7000) * .06);
    }
    return 0;
}