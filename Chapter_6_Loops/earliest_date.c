//Chapter 6 Programming Project #10 from King's Modern C
//Write a program that determines which of the two dates comes earlier on the calender
//generalize it so that the user may enter any number of dates. Enter 0/0/0 to stop.
//Very awful looking code here, need to clean up later on (dont need 9 variables)
#include <stdio.h>

int main(void)
{
    int M, D, Y, secondM, secondD, secondY,earliestM, earliestD, earliestY;

    do
    {
        secondM = M;
        secondY = Y;
        secondD = D;
        printf("Enter first date (mm/dd/yy): ");
        scanf("%d/%d/%d",&M,&D,&Y);
        if(Y>secondY){
            earliestM = secondM;
            earliestD = secondD;
            earliestY = secondY;
        } else if(Y == secondY){
            if(M<secondM){
                earliestY = secondM;
                earliestD = secondD;
                earliestY = secondY;
            } else if(M == secondM){
                if(D>secondD){
                    earliestM = secondM;
                    earliestD = secondD;
                    earliestY = secondY;
                }
            }
        }
        else {
            earliestM = secondM;
            earliestD = secondD;
            earliestY = secondY;
        }
        
    } while (M!=0&&D!=0&&Y!=00);
    printf("%d/%d/%d is earliest date",earliestM,earliestD,earliestY);





    /* if(firstY<secondY){
        printf("%d/%d/%d is earlier than %d/%d/%d",firstM,firstD, firstY, secondM,secondD,secondY);
    } else if(firstY == secondY){
        if(firstM<secondM){
            printf("%d/%d/%d is earlier than %d/%d/%d",firstM,firstD, firstY, secondM,secondD,secondY);
        } else if(firstM == secondM){
            if(firstD<secondD){
                printf("%d/%d/%d is earlier than %d/%d/%d",firstM,firstD, firstY, secondM,secondD,secondY);
            }
        }
    } else {
        printf("%d/%d/%d is earlier than %d/%d/%d",secondM, secondD, secondY, firstM, firstD, firstY);
    }  */
}