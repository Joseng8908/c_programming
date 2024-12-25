#include <stdio.h>

int main(void)
{
	char first_initial, last_name, ch;

	printf("Enter a first and last name: ");
	
	while((first_initial = getchar()) == ' ');
	while((ch = getchar()) != ' ');
	while((last_name = getchar()) == ' ');
	do
	{
		printf("%c", last_name);
	}while((last_name = getchar()) != '\n');

	printf(", %c.", first_initial);
}

