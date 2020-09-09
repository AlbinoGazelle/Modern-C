//Chapter 4 Programming Project #4
//Write a program that reads an integer entered by the user
//and displays it in octal (base 8)
//I know there is a better way to do this with a loop, but at this point 
//in the book we havent learned of any loops or decision statements
#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter a number between 0 and 32767: ");
    scanf("%ddd",&n);
    int n1,n2,n3,n4,n5;
    n1 = n % 8;
    n = n / 8;
    n2 = n % 8;
    n = n / 8;
    n3 = n % 8;
    n = n / 8;
    n4 = n % 8;
    n = n / 8;
    n5 = n % 8;
    
    printf("%d%d%d%d%d",n5,n4,n3,n2,n1);
    return 0;
}