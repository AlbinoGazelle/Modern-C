//Chapter 2 Programming Project #2 + #3 from King's Modern C
//Write a program that computes the volume of a sphere
#include <stdio.h>
#define CONVERSION 4.0f/3.0f
#define PI 3.14
int main(void)
{
    float radius, volume;
    printf("Enter radius of sphere: ");
    scanf("%f",&radius);
    volume = (CONVERSION) * PI * radius * radius * radius;
    printf("Volume of sphere: %.1f",volume);
    return 0;
}
