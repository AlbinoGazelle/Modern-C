//Chapter 5 Programming Project #10 from King's Modern C
//Using the switch statement, write a program that converts a numerical grade into a letter grade

#include <stdio.h>

int main(void)
{
    int grade;
    printf("Enter numerical grade: ");
    scanf("%d",&grade);
    grade = grade / 10;

    switch (grade)
    {
    case 10:
        printf("Letter grade: A");
        break;
    case 9:
        printf("Letter grade: A");
        break;
    case 8:
        printf("Letter grade: B");
        break;
    case 7:
        printf("Letter grade: C");
        break;
    case 6:
        printf("Letter grade: D");
        break;
    default:
        printf("Letter grade: F");
    }
}