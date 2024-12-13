#include <stdio.h>

int main(void)
{
	int month, date, year;

	printf("Enter a date (mm/dd/yyyy): ");
	scanf("%d/%d/%d", &month, &date, &year);

	printf("You entered the date %d%d%d", month, date, year);

	return 0;
}
