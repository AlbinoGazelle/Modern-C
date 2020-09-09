//Chapter 4 Programming Project #6 from King's Modern C
//modify upc.c to calculate ean check digit (European equivalent to UPC)
//869148426000
#include <stdio.h>
int main(void)
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, i12, first_sum, second_sum, total;
    printf("Enter the EAN Code: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11,&i12);
    first_sum = i2 + i4 + i6 + i8 + i10 + i12;
    second_sum = i1 + i3 + i5 + i7 + i9 + i11;
    total = second_sum + (first_sum * 3) - 1;
    printf("Check digit: %d\n",9 - (total % 10));

}