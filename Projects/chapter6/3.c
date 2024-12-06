#include <stdio.h>

int main(void)
{
	float num1, num2;
	int n, m, temp;

	printf("Enter a fraction: ");
	scanf("%f/%f", &num1, &num2);

	n = num1;
	m = num2;

	for(;n != 0;)
	{	
		temp = n;
		n = m % n;
		m = temp;
	}

	printf("In lowest terms: %.0f/%.0f", num1/m, num2/m);

	return 0;
}
