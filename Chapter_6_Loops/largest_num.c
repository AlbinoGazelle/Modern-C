//Chapter 6 Programming Project #1 from King's Modern C
//Write a program that finds the largest in a series of numbers
//entered by the user. When the user enters 0 or a negative number
//the program must display the largest nonnegative number entered
#include <stdio.h>
int main(void)
{
    float n, end=1,largest = 0;
    while (end == 1)
    {
        printf("Enter a number: ");
        scanf("%f",&n);
        if (n == 0)
        {
            end = 0;
        } else if (n>largest){
            largest = n;
        }
    }
    printf("The largest number entered was: %.2f",largest);
}