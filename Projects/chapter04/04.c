#include <stdio.h>

int main(void)
{
	int number;
	int number1, number2, number3, number4, number5;

	printf("Enter a number between 0 and 32767 : ");
	scanf("%d", &number);

	number1 = number % 8;
	number /= 8;
	number2 = number % 8;
	number /= 8;
	number3 = number % 8;
	number /= 8;
	number4 = number % 8;
	number /= 8;
	number5 = number % 8;

	printf("In octar, your number is : %d%d%d%d%d", number5, number4, number3, number2, number1);

	return 0;
}
