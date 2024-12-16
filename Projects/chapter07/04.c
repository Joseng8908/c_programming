#include <stdio.h>

int main(void)
{
	char number;

	printf("Enter phone nmber: ");

	while((number = getchar()) != '\n')
	{

		if('A' <= number && number <= 'C')
		{
			putchar('2');
		}
		else if('D' <= number && number <= 'F')
		{
			putchar('3');
		}
		else if('G' <= number && number <= 'I')
		{
			putchar('4');
		}
		else if('J' <= number && number <= 'L')
		{
			putchar('5');
		}
		else if('M' <= number && number <= 'O')
		{
			putchar('6');
		}
		else if('P' <= number && number <= 'S')
		{
			putchar('7');
		}
		else if('T' <= number && number <= 'V')
		{
			putchar('8');
		}
		else if('W' <= number && number <= 'Y')
		{
			putchar('9');
		}
		else
		{
			putchar(number);
		}
	}
	return 0;
}
