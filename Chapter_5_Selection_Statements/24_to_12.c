//Chapter 5 Programming Project #2 from King's Modern C book
//Write a program that asks the user for a 24 hour time,
//then displays that time in 12 hour form

#include <stdio.h>

int main(void)
{
    int time, convertTime;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",time);
    printf("%d",time);
}