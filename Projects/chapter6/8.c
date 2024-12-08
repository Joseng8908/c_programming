#include <stdio.h>

int main(void)
{
	int days, start_day;

	printf("Enter number of days in month: ");
	scanf("%d", &days);
	printf("Enter starting day of the week (1=Sun, 7=Sat): ");
	scanf("%d", &start_day);

	for(int i = 0; i < start_day - 1; i++)
	{
		printf("   ");
	}
	for(int i = 1; i <= days; i++)
	{
		if((i + start_day - 1) % 7 == 0)
		{	
			printf("%2d ", i);
			printf("\n");
		}
     		else
		{
			printf("%2d ", i);
		}
	}

	return 0;
}
