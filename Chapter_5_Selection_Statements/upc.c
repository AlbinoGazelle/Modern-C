//Chapter 5 Programming Project #6 from King's Modern C
//Modify the upc.c program from 4.1 so that it
//checks whether a UPC is valid

#include <stdio.h>
//01380015173
int main(void)
{
    int d, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5, first_sum, second_sum, total, check_digit;

    printf("Enter the UPC Code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&d,&i1,&i2,&i3,&i4,&i5,&j1,&j2,&j3,&j4,&j5,&check_digit);

    
    first_sum = d + i2 + i4 + j1 + j3 + j5;
    second_sum = i1 + i3 + i5 + j2 + j4;
    total = 3 * first_sum + second_sum;
    if(check_digit == 9 - (total - 1) % 10){
        printf("VALID");
    } else printf("INVALID");
    return 0;

}