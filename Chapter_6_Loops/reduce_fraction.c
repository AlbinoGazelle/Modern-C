//Chapter 6 Programming Project #3 from King's Modern C
//Write a program that asks the user to enter a fraction
//then reduces the fraction to lowest terms

#include <stdio.h>

int main(void)
{
    //need copy1+2 because we change num and denom while calculating gcd (could swap with num and denom but lazy)
    int num, denom, gcd, remainder, copy1, copy2;

    printf("Enter a fraction: ");
    scanf("%d/%d",&num,&denom);
    copy1 = num;
    copy2 = denom;
    while(denom!=0)
    {
        remainder = num % denom;
        num = denom;
        denom = remainder;
    }
    gcd = num;

    printf("Reduced Fraction %d/%d",copy1 / gcd, copy2 / gcd);
}