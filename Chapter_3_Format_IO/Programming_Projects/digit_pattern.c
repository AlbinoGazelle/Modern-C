//Chapter 3 Programming Project #5 from king's Modern C
//Write a program that aks the user to enter the numbers from
//1-16(in any order) and then displays the numbers
//in a 4 by 4 arrangement, followed by the sums
//of the rows, columns, and diagnols

//I know this is an awful way of doing it, but this is early in the book before we learn things like loops or decision statements.
#include <stdio.h>

int main(void)
{
    int num,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15,num16;
    printf("Enter the numbers from 1 to 16 in any order: ");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&num,&num2,&num3,&num4,&num5,&num6,&num7,&num8,&num9,&num10,&num11,&num12,&num13,&num14,&num15,&num16);
    printf(" %2d %2d %2d %2d \n %2d %2d %2d %2d \n %2d %2d %2d %2d \n %2d %2d %2d %2d\n",num,num2,num3,num4,num5,num6,num7,num8,num9,num10,num11,num12,num13,num14,num15,num16);
    printf("Row sums: %d %d %d %d\n",num+num2+num3+num4,num5+num6+num7+num8,num9+num10+num11+num12,num13+num14+num15+num16);
    printf("Column sums: %d %d %d %d\n",num+num5+num9+num13,num2+num6+num10+num14,num3+num7+num11+num15,num4+num8+num12+num16);
    printf("Diagonal sums: %d %d",num+num6+num11+num16,num4+num7+num10+num13);

    return 0;
}