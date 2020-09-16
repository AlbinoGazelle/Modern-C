//Chapter 6 Programming Project #6 from King's Modern C
//Write a program that prompts the user to enter a number n,
//then prints all even squares between 1 and n

#include <stdio.h>

int main(void)
{
    int n, squares;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(int i = 1; i*i<=n;i++){
        squares = i * i;
        if(squares % 2 == 0){
            printf("%d\n",squares);
        }
    }
    return 0;
}