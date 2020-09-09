//Chapter 4 Programming project #1,2,3 from King's Modern C
//#1: Write a program that asks the user to enter a two
//digit number then prints it reversed
//#2: Make it handle 3 digit numbers
//3: Make it not use arithmetic to split into digits
#include <stdio.h>

int main(void)
{

    /** first method
    int digit;
    printf("Enter a two-digit number: ");
    scanf("%d",&digit);
    int first = digit / 10;
    int second = digit % 10;
    printf("The reversal is: %d%d",second,first);
    **/
    /** second problem
    int digit, middle;
    printf("Enter a three-digit number: ");
    scanf("%d",&digit);
    printf("The reversal is: %d%d%d", digit %10, (digit /10)%10, digit /100);
    **/
    //third problem
    int d1,d2,d3;
    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d",&d1,&d2,&d3);
    printf("%1d%1d%1d",d3,d2,d1);
    return 0;
}