#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
	int dollar, twenties, tens, fives, ones;
	printf("Enter a dollar amount: ");
	scanf("%d", &dollar);
	pay_amount(dollar, &twenties, &tens, &fives, &ones);
	printf("20$: %d\n", twenties);
	printf("10$: %d\n", tens);
	printf("05$: %d\n", fives);
	printf("01$: %d\n", ones);
}


void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones)
{
	*twenties = dollars / 20;
	dollars = dollars % 20;
	*tens = dollars / 10;
	dollars = dollars % 10;
	*fives = dollars / 5;
	dollars = dollars % 5;
	*ones = dollars;
}
