//Chapter 3 Programming Project #2 from King's Modern C
//Write a program that formats product information entered
//by the user.
#include <stdio.h>

int main(void)
{
    int itemNum, day, month, year;
    float unitPrice;
    printf("Enter item number: ");
    scanf("%d",&itemNum);

    printf("Enter unit price: ");
    scanf("%f",&unitPrice);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&month,&day,&year);

    printf("Item        Unit        Purchase\n");
    printf("            Price       Date\n");
    printf("%d         $%7.2f    %d/%d/%d",itemNum,unitPrice,month,day,year);

    return 0;
}