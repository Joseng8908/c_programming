#include <stdio.h>

int main(void)
{
	float operand, sum;
	char operator, ch;

	printf("Enter an expression: ");

	scanf("%f", &operand);
	sum = operand;

	for (;;)
	{
		operator = getchar();
		if(operator == '\n')
			break;

		scanf("%f", &operand);
		switch (operator) {
			case '+': sum = sum + operand; break;
			case '-': sum = sum - operand; break;
			case '*': sum = sum * operand; break;
			case '/': sum = sum / operand; break;
			default: ;
		}
	}

	printf("Value of expressioin: %g", sum);

	return 0;
	
}
