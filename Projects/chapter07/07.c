#include <stdio.h>

int main(void)
{
	int num1, denom1, num2, denom2, result_num, result_denom;
	char operator, ch;
	printf("Enter two fractions with operator: ");
	scanf("%d/%d", &num1, &denom1);

	while((operator = getchar()) == ' ');
	
	scanf(" %d/%d", &num2, &denom2);

	if(operator == '+')
	{
		result_num = num1 * denom2 + num2 * denom1;
		result_denom = denom1 * denom2;
	}
	else if(operator == '-')
	{
		result_num = num1 * denom2 - num2 * denom1;
		result_denom = denom1 * denom2;
	}
	else if(operator == '*')
	{
		result_num = num1 * num2;
		result_denom = denom1 * denom2;
	}
	else if(operator == '/')
	{
		result_num = num1 * denom2;
		result_denom = num2 * denom1;
	}

	printf("The value is %d/%d\n", result_num, result_denom);
	return 0;
}
