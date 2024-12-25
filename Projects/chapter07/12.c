#include <stdio.h>

int main(void)
{
	float operand, sum = 0.f;
	char operator, ch;

	printf("Enter an expression: ");

	scanf("%f", &operand);
	sum = operand;

	for(;;)	
	{
		operator = getchar();
		if(operator == '\n')
		{
			break;
		}

     		else
		{
			scanf("%f", &operand);
			switch(operator)
			{
				case '+': sum = sum + operand; break;
				case '-': sum = sum - operand; break;
				case '*': sum = sum * operand; break;
				case '/': sum = sum / operand; break;
				default: ;
			}
		}
	}

	printf("Value of expressioin: %g", sum);
	
}
