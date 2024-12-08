#include <stdio.h>

int main(void)
{

        float loan, rate, payment, balance;

        printf("Enter amount of loan: ");
        scanf("%f", &loan);
        printf("Enter interest rate: ");
        scanf("%f", &rate);
	balance = loan;
	rate = rate / 100.00f / 12.00f;
	
	for(;;)
	{
		printf("Enter payment(to exit, enter 0): ");
		scanf("%f", &payment);
		
		if(payment == 0)
		{
			return 0;
		}
		balance = balance + balance * rate;
		balance = balance - payment;
		printf("\nBalance remaining after payment : $%.2f\n", balance);
		
	}
}

