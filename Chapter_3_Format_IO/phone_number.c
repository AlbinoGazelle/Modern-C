//Chapter 3 Programming Project From #4 King's Modern C
//Write a prgram that prompts the user to enter a telephone
//number in the form (xxx) xxx-xxxx
//and then displays it in the form xxx.xxx.xxxx
#include <stdio.h>

int main(void)
{
    int areaCode, firstSec, secSec;
    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d)%d-%d",&areaCode,&firstSec,&secSec);
    printf("You entered: %d.%d.%d",areaCode,firstSec,secSec);

    return 0;
}