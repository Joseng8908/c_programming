#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	char number[15] = {false};
	printf("Enter phone number: ");
	
	for (int i = 0; i < 15; i++)
	{
		number[i] = getchar();
		if('A' <= number[i] && number[i] <= 'C')
			number[i] = '2';
		else if('D' <= number[i] && number[i] <= 'F')
			number[i] = '3';	
		else if('G' <= number[i] && number[i] <= 'I')
			number[i] = '4';
		else if('J' <= number[i] && number[i] <= 'L')
			number[i] = '5';
		else if('M' <= number[i] && number[i] <= 'O')
			number[i] = '6';
		else if('P' <= number[i] && number[i] <= 'S')
			number[i] = '7';
		else if('T' <= number[i] && number[i] <= 'V')
			number[i] = '8';
		else if('W' <= number[i] && number[i] <= 'Y')
			number[i] = '9';
		else
			/* do nothing */;
	}

	printf("In numeric form: ");
	for(int i = 0; i < 15; i++)
		printf("%c", number[i]);

	return 0;
}
