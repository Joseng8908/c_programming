#include <stdio.h>

int main(void)
{
	int blank, start, end;

	printf("Enter phone number [(xxx) xxx-xxxx]: ");
	scanf("(%d) %d-%d", &blank, &start, &end);

	printf("You entered %d.%d.%d", blank, start, end);

	return 0;
}
