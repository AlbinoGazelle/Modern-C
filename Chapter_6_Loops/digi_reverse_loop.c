//Chapter 6 Programming Project #5 from King's Modern C
//Write a program that displays a number with its digits reversed

#include <stdio.h>

int main(void)
{
    int n, remainder;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("Reversed Number: ");
    do
    {
        remainder = n % 10;
        n = n / 10;
        printf("%d",remainder);
    } while (n!=0);
    
    
}