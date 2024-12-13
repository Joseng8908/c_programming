#include <stdio.h>

int main (void) 
{
	int month, day, year;
	int converted_day, min;
	int min_month, min_day, min_year;

	min = 99999;

	for(;;)
	{
		printf("Enter a date (mm/dd/yy) : ");
		scanf("%d/%d/%d", &month, &day, &year);

		if(month == 0 && day == 0 && year == 0)
		{
			break;
		}

		converted_day = (year * 365) + (day) + (month * 30);
		
		if(converted_day < min)
		{	
			min = converted_day;
			min_day = day;
			min_month = month;
			min_year = year;
		}
    		else
		{
			continue;
		}
	}
	
	printf("%d/%d/%.2d is the earliest date", min_month, min_day, min_year);

	return 0;
}
