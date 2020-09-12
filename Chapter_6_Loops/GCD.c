//Chapter 6 Programming Project #2 from King's Modern C
//Write a program that asks the user to enter two digits
//then calculates and displays their GCD

#include <stdio.h>

int main(void)
{
    int m, n, gcd, remainder;
    printf("Enter two integers: ");
    scanf("%d %d",&m, &n);

    while (n!=0)
    {
        remainder = m % n;
        m = n;
        n =  remainder;
    }
    gcd = m;
    printf("Greatest common divisor: %d",gcd);
}