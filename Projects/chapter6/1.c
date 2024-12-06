#include <stdio.h>

int main(void)
{
	float number, largest_number;
	
	largest_number = 0;

	for(;;)
	{
		printf("Enter a number: ");
		scanf("%f", &number);
	

		if(number <= 0)
		{
			break;
		}
	
		else
		{
			if(number > largest_number)
			{
				largest_number = number;
			}

			else
     			{
				continue;
			}
		}
	}

	printf("The largest number entered was %.2f", largest_number);

	return 0;
}
