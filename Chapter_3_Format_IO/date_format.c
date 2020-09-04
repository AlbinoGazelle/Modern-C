//Chapter 2 Programming Project #1 King's C Book
//write a program that accepts a date from the user
//in the form
//mm//dd/yyyy
//and converts it to
//yyyymmdd
#include <stdio.h>

int main(void)
{
    int day,month,year;
    printf("Enter a date(mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);
    printf("Date: %d%.2d%.2d",year,month,day);

    return 0;
}