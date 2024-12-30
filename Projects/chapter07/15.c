#include <stdio.h>

int main(void)
{
	int integer;
	short value = 1;
	printf("Enter a positive integer: ");
	scanf("%d", &integer);

	for(int i = integer; i > 0; i--)
	{
		value = value * i;
	}

	printf("%hd", value);

	return 0;
}
