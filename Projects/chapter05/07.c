#include <stdio.h>

int main(void)
{
	int num1, num2, num3, num4, small_1, small_2, large_1, large_2,
	smallest, largest;
	
	printf("Enter four integers: ");
	scanf("%d %d %d %d", &num1, &num2, &num3, &num4);

	if(num1 > num2)
	{
		small_1 = num2;
		large_1 = num1;
	}
	else
	{
		small_1 = num1;
		large_1 = num2;
	}

	if(num3 > num4)
	{
		small_2 = num4;
		large_2 = num3;
	}
	else
	{
		small_2 = num3;
		large_2 = num4;
	}

	if(small_1 > small_2)
	{
		smallest = small_2;
	}
	else
	{
		smallest = small_1;
	}

	if(large_1 > large_2)
	{
		largest = large_1;
	}
	else
	{
		largest = large_2;
	}

	printf("Largest: %d\n", largest);
	printf("Smallest: %d", smallest);

	return 0;
}
