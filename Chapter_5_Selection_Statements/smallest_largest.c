//Chapter 5 Programming Project #7 from King's Modern C
//Write a program that finds the largest and smallest of four integers
//use as few if statements as possible


#include <stdio.h>

int main(void)
{
    int n1, n2, n3, n4, smallest, largest;
    printf("Enter four integers: ");
    scanf("%d %d %d %d",&n1,&n2,&n3,&n4);
    smallest = n1;
    largest = n1;
    if(n2<smallest){
        smallest = n2;
    } if(n3<smallest){
        smallest = n3;
    } if(n4<smallest){
        smallest = n4;
    } 
    if(n2>largest){
        largest = n2;
    } if(n3>largest){
        largest = n3;
    } if(n4>largest){
        largest = n4;
    }
    printf("Smallest number: %d Largest number: %d",smallest, largest);

}