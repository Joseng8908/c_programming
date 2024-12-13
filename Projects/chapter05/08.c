#include <stdio.h>

int main(void)
{
	int hour, minute, minute_expressed;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hour, &minute);

	minute_expressed = hour * 60 + minute;

	if(minute_expressed < (480 + 583) / 2)
	{
		printf("Closest departure time is 8:0  a.m., arriving at 10:16 a.m.");
	}
	else if((480 + 583) / 2 < minute_expressed && minute_expressed <= (583 + 679) / 2)
	{
		printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
	}
	else if((583 + 679) / 2 < minute_expressed && minute_expressed <= (679 + 767) / 2)
	{
		printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");
	}
	else if((679 + 767) / 2 < minute_expressed && minute_expressed <= (767 + 840) / 2)
	{
		printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.");
	}
	else if((767 + 840) / 2 < minute_expressed && minute_expressed <= (840 + 945) / 2)
	{
		printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.");
	}
	else if((840 + 945) / 2 < minute_expressed && minute_expressed <= (945 + 1140) / 2)
	{
		printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.");
	}
	else if((945 + 1140) / 2 < minute_expressed && minute_expressed <= (1140 + 1305) / 2)
	{
		printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.");
	}
	else
	{
		printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.");
	}

	return 0;
}
