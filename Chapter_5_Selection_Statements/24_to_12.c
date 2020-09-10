//Chapter 5 Programming Project #2 from King's Modern C book
//Write a program that asks the user for a 24 hour time,
//then displays that time in 12 hour form

#include <stdio.h>

int main(void)
{
    int time1,time2, convertTime;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&time1,&time2);
    
    if (time1<12){
        printf("Equivalent 12 hour time: %d:%d AM",time1, time2);
    } else if (time1>12){
        time1 = time1 - 12;
        printf("Equivalent 12 hour time: %d:%d PM",time1, time2);
    } else {
        printf("Equivalent 12 hour time: %d:%d PM",time1, time2);
    }
    return 0;
}