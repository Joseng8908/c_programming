#include <stdio.h>

int main(void)
{
	int number;
	int digits;

	printf("Enter a number: ");
	scanf("%d", &number);

	if(number < 10) digits = 1;
	else if(number < 100) digits = 2;
	else if(number < 1000) digits =3;
	else	digits =4;

	printf("The number %d has %d digits", number, digits);
	
	return 0;
}
