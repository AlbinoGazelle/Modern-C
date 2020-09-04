//Chapter 3 Programming Project #6 from King's Modern C
//modify add_frac.c so that the user can input both fractions separated by a plus sign
#include <stdio.h>

int main(void)
{
    int num1, denom1, num2, denom2, result_num, result_denom;

    printf("Enter two fractions separated by a plus sign: ");
    scanf("%d/%d+%d/%d",&num1,&denom1,&num2,&denom2);
    printf("%d/%d",num1*denom2+num2*denom1,denom1*denom2);
    
    return 0;
}