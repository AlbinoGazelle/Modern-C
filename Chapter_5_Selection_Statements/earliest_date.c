//Chapter 5 Programming Project # 9 from King's Modern C
//Write a program that prompts the user to enter two dates
//and then indicates which date comes earlier on the calender

#include <stdio.h>

int main(void)
{
    int firstM, firstD, firstY, secondM, secondD, secondY;
    printf("Enter first date (mm/dd/yy): ");
    scanf("%d/%d/%d",&firstM,&firstD,&firstY);
    printf("Enter second date (mm/dd/yy): ");
    scanf("%d/%d/%d",&secondM,&secondD,&secondY);

    if(firstY<secondY){
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
    } 
}