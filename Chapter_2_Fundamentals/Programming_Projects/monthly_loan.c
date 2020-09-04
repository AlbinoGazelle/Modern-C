//Chapter 2 Programming Project #
//write a program that calculates the remaining 
//balance on a loan after the 1st, 2nd, and 3rd
//monthly payments
//balance is decreased by the monthly payment each month
//increased by the balance times monthly interest rate
#include <stdio.h>

int main(void)
{
    float monthlyPay, loanAmount, interestRate;
    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);

    printf("Enter interest rate: ");
    scanf("%f",&interestRate);

    printf("Enter monthly payment: ");
    scanf("%f",&monthlyPay);

    interestRate = (interestRate / 12.0f)/100;
    float addRate = interestRate * loanAmount;
    loanAmount = (loanAmount - monthlyPay) + addRate;

    printf("Balance after 1st payment: $%.2f\n",loanAmount);
    addRate = interestRate * loanAmount;
    loanAmount = (loanAmount - monthlyPay) + addRate;
    printf("Balance after 2nd payment: $%.2f\n",loanAmount);

    addRate = interestRate * loanAmount;
    loanAmount = (loanAmount - monthlyPay) + addRate;
    printf("Balance after 3rd payment: $%.2f\n",loanAmount);
}