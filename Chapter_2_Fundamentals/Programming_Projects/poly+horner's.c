//Chapter 2 Programming Project #5+#6
//write a program that ask the user to enter a
//value for x and then displays the value of the 
//following polyonomial: 3x^5+2x^4-5x^3-x^2+7x-6
//modify to use ((((3x+2)x-5)x-1)x+7)x-6)
#include <stdio.h>

int main(void)
{
    int x;
    printf("Enter value for x: ");
    scanf("%d",&x);
    //old method
    //int result = 3*(value * value * value * value * value) + 2*(value*value*value*value) - 5*(value * value * value) - (value * value) + 7*(value) - 6;
    int result = ((3*x *x)+(3*x*x)+(3*x*x)+(3*x*x)) + ((2*-5)+(2*-1)+(2*7)+(2*-6));
    printf("The result is: %d",result);
}