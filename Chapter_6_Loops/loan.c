//Chapter 6 Programming Project #9
//Modify monthly_loan.c from Chapter 2 so it also asks
//the user to enter the number of payments and then displays the balance remaining

#include <stdio.h>

int main(void)
{
    float monthlyPay, loanAmount, interestRate;
    int payNum;
    printf("Enter amount of loan: ");
    scanf("%f", &loanAmount);

    printf("Enter interest rate: ");
    scanf("%f",&interestRate);

    printf("Enter monthly payment: ");
    scanf("%f",&monthlyPay);

    printf("Enter number of payments: ");
    scanf("%d",&payNum);

    interestRate = (interestRate / 12.0f)/100;
    float addRate = interestRate * loanAmount;
    loanAmount = (loanAmount - monthlyPay) + addRate;

    for (int i = 1; i <= payNum; i++)
    {
        loanAmount = loanAmount - monthlyPay + (loanAmount * interestRate);
        printf("Balance after payment #%d: $%.2f\n",i,loanAmount);
    } 
    
}
