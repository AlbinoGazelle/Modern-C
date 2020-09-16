//Chapter 6 Programming Project #8 from King's Modern C
//Write a program that prints a one-month calendar
//The user specifies the number of days in the month and the day of the week on which the month begins

#include <stdio.h>

int main(void)
{
    int days, startDate, firstEnd, nextDay;
    printf("Enter number of days in month: ");
    scanf("%d",&days);
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d",&startDate);
    firstEnd = 8 - startDate;
    for(int j = 0;j<startDate;j++){
            printf("   ");
        }
    for(int i = 1, nextDay = 1; i <=days; i++){
        if(i == firstEnd){
            printf("%2d\n",i);
        } else if(i == firstEnd + 7){
            firstEnd = i;
            printf("%3d\n",i);
        } else printf("%2d  ",i);
    }
}