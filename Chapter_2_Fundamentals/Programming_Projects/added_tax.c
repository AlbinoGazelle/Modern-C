//Chapter 2 Programming Project #4
//Write a program that asks the user to enter a dollar
//and cents amount then displays the amount
//with 5% tax added
#include <stdio.h>

int main(void)
{
    int dollars, taxAdded, finalAmount;
    printf("Enter dollar amount: ");
    scanf("%d",&dollars);

    taxAdded = (dollars * 5) / 100; //formala for calculating 5% of the dollar variable
    finalAmount = dollars + taxAdded; //add that amount to our final amount placeholder
    printf("Original $ Amount: %d\n",dollars); //print original value
    printf("Amount with 5%% Tax %d\n", finalAmount); //print final value (must add two percentage signs to get correct output)
    return 0;
}