//Chapter 3 Programming Project #3 from King's Modern C
//Write a program that breaks down an ISBN entered by the user
#include <stdio.h>

int main(void)
{
    int prefix, groupID, pubCode, itemNum, checkDig;
    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d",&prefix,&groupID,&pubCode,&itemNum,&checkDig);
    printf("GS1 Prefix: %d\n",prefix);
    printf("Group identifier: %d\n",groupID);
    printf("Publisher code: %d\n",pubCode);
    printf("Item number: %d\n",itemNum);
    printf("Check digit: %d",checkDig);

    return 0;
}