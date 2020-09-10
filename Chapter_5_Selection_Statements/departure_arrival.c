//Chapter 5 Programming project #8
//write a program that asks the user to enter a time
//then display departure and arrival times for the 
//flight whose departure time is closest to that
#include <stdio.h>

int main(void)
{  
    int hours, minutes, t1 = 480, t2 = 583, t3 = 679, t4 = 767, t5 = 840, t6 = 945, t7 = 1140, t8 = 1305;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hours,&minutes);
    minutes = hours * 60 + minutes;

    if(minutes<= t1 + (t2 - t1)/2){
        printf("Closest departure time is 8:00 am, arriving at 10:16");
    } else if(minutes < t2 + (t3 - t2) / 2){
        printf("Closest departure time is 9:43 am, arriving at 11:52 am");
    } else if(minutes < t3 + (t4 - t3) / 2){
        printf("Closest departure time is 11:19 am, arriving at 1:31 pm");
    } else if(minutes < t4 + (t5 - t4) / 2){
        printf("Closest departure time is 12:47 pm, arriving at 3:00 pm");
    } else if(minutes < t5 + (t6 - t5) / 2){
        printf("Closest departure time is 2:00 pm, arriving at 4:08 pm");
    } else if(minutes < t6 + (t7 - t6) / 2){
        printf("Closest departure time is 3:45 pm, arriving at 5:55 pm");
    } else if(minutes < t7 + (t8 - t7) / 2){
        printf("Closest departure time is 7:00 pm, arriving at 9:20 pm");
    } else {
        printf("Closest departure time is 9:45 pm, arriving at 11:58 pm");
    }
    return 0;
}