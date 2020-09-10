//Chapter 5 Programming Project from King's Modern C
//Write a program that calculates how many digits a number contains
//assume that the number has no more than four digits
#include <stdio.h>
int main(void)
{
    int n,Ndigit;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (n < 9){
        Ndigit = 1;
    } else if (n >9 && n <99){
        Ndigit = 2;
    } else if (n > 99 && n < 999){
        Ndigit = 3;
    } else Ndigit = 4;

    printf("The number %d has %d digits",n, Ndigit);
    return 0;
}