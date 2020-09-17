//Chapter 6 Programming Project #10 from King's Modern C
//Write a program that determines which of the two dates comes earlier on the calender
//generalize it so that the user may enter any number of dates. Enter 0/0/0 to stop.
//Very awful looking code here, need to clean up later on (dont need 9 variables)
#include <stdio.h>

int main(void)
{
    int M, D, Y, M2, D2, Y2;
    printf("Enter date(mm/dd/yy): ");
    scanf("%d/%d/%d",&M,&D,&Y);

    while (1)
    {
        printf("Enter date(mm/dd/yy): ");
        scanf("%d/%d/%d",&M2,&D2,&Y2);
        if(M2==0&&D2==0&&Y2==0){
            break;
        }
        if((Y2 < Y) || (Y == Y2 && M2 < M) || (Y == Y2 && M == M2 && D2 < D)){
            D = D2;
            Y = Y2;
            M = M2;
        }
    }
    printf("Earliest Date: %d/%d/%d",M,D,Y);
}