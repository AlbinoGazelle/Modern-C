//Chapter 5 Programming Project #11 from King's Modern C
//Write a program that asks the user for a two-digit number,
//then prints the English word for the number
//added return 0 to special cases to break out of program, don't need to go to other switch after we've printed that
#include <stdio.h>

int main(void)
{
    int n, d1, d2;
    printf("Enter a two-digit number: ");
    scanf("%d",&n);
    d1 = n / 10;
    d2 = n % 10;
    printf("You entered the number ");
    if(n<=19&&n>=11){
        switch (n)
        {
        case 11:
            printf("eleven");
            return 0;
            break;
        case 12:
            printf("twelve");
            return 0;
            break;
        case 13:
            printf("thirteen");
            return 0;
            break;
        case 14:
            printf("fourteen");
            return 0;
            break;
        case 15:
            printf("fifteen");
            return 0;
            break;
        case 16:
            printf("sixteen");
            return 0;
            break;
        case 17:
            printf("seventeen");
            return 0;
            break;
        case 18:
            printf("eighteen");
            return 0;
            break;
        case 19:
            printf("nineteen");
            return 0;
        default:
            break;
        }
    }
    switch (d1)
    {
    case 9:
        printf("ninety-");
        break;
    case 8:
        printf("eighty-");
        break;
    case 7:
        printf("seventy-");
        break;
    case 6:
        printf("sixty-");
        break;
    case 5:
        printf("fifty-");
        break;
    case 4:
        printf("fourty-");
        break;
    case 3:
        printf("thirty-");
        break;
    case 2:
        printf("twenty-");
        break;
    default:
        break;
    }
    switch (d2)
    {
    case 9:
        printf("nine");
        break;
    case 8:
        printf("eight");
        break;
    case 7:
        printf("seven");
        break;
    case 6:
        printf("six");
        break;
    case 5:
        printf("five");
        break;
    case 4:
        printf("four");
        break;
    case 3:
        printf("three");
        break;
    case 2:
        printf("two");
        break;
    case 1:
        printf("one");
        break;
    default:
        break;
    }
}