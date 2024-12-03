#include <stdio.h>

int main (void) 
{
	int  month1, day1, year1, month2, day2, year2;
	int flag;

	printf("Enter first date (mm/dd/yy) : ");
	scanf("%d/%d/%2d", &month1, &day1, &year1);

	printf("Enter second date (mm/dd/yy) : ");
	scanf("%d/%d/%2d", &month2, &day2, &year2);

	if(year2 > year1) flag = 1;
	else if(year1 > year2) flag = 2;
	else
	{
		if(month2 > month1) flag = 1;
		else if(month1 > month2) flag = 2;
		else
		{
			if(day2 > day1) flag = 1;
			else if(day1 > day2) flag = 2;
			else printf("Same date!!");
			return 0;
		}
	}

	if(flag == 1)
	{
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month1, day1, year1, month2, day2, year2);
	}
	else
	{
		printf("%d/%d/%.2d is earlier than %d/%d/%.2d", month2, day2, year2, month1, day1, year1);
	}

	return 0;
}
