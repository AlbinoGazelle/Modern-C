//Chapter 5 Programming Project #4 from King's Modern C
//Write a program that asks the user to enter a wind
//speed (in knots), then displays the corresponding description

#include <stdio.h>

int main(void)
{
    float windSpeed;
    printf("Enter wind speed (in knots): ");
    scanf("%f",&windSpeed);

    if(windSpeed<1){
        printf("Wind force: Calm");
    } else if(windSpeed>=1&&windSpeed<=3){
        printf("Wind force: Light Air");
    } else if(windSpeed>=4&&windSpeed<=27){
        printf("Wind force: Breeze");
    } else if(windSpeed>=28&&windSpeed<=47){
        printf("Wind force: Gale");
    } else if(windSpeed>=48&&windSpeed<=63){
        printf("Wind force: Storm");
    } else {
        printf("Wind force: Hurricane");
    }
    return 0;

}