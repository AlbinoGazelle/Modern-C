//write a program that asks the user to enter
//Chapter 2 Programming Project #7 from King's Modern C
//a dollar amount and then shows how to pay
//that amount using the smallest number of 
//$20, $10, $5, $1 bills

#include <stdio.h>

int main(void)
{
    int dollar;
    printf("Enter U.S Dollar amount: ");
    scanf("%d",&dollar);

    int math = dollar / 20;
    printf("$20 Bills: %d\n",math);
    dollar = dollar - (math*20);
    math = dollar / 10;
    printf("$10 Bills: %d\n",math);
    dollar = dollar - (math*10);
    math = dollar / 5;
    printf("$5 Bills: %d\n",math);
    dollar = dollar - (math*5);
    math = dollar /1;
    printf("$1 Bills: %d",math);
    dollar = dollar - math;

}