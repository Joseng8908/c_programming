#include <stdio.h>

int main(void)
{
	int number, n;

	printf("Enter a n(n-digit): ");
	scanf("%d", &n);

	printf("Enter a %d-digit number: ", n);
	scanf("%d", &number);

	printf("The reversal is ");

	do
	{
		printf("%d", number % 10);
		number /= 10;
	}
	while(number != 0);

	return 0;
}
