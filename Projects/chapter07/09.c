#include <stdio.h>

int main(void)
{
	int hour, minute;
	char ch;

	printf("Enter a 12-hour time: ");
	scanf("%d:%d", &hour, &minute);

	while((ch = getchar()) == ' ');

	if(ch == 'A')
	{
		;
	}
	else if(ch == 'P')
	{
		hour += 12;
	}

	while((ch = getchar()) != '\n');
	
	printf("Equivalent 24-hour time: %d:%d", hour, minute);

	return 0;
}
