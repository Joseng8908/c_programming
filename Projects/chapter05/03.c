#include <stdio.h>

int main(void)
{
	float commission, rival_commission, value;
	float number, price;

	printf("Enter the number of shares and the price per share: ");
	scanf("%f %f", &number, &price);
	value = price * number;
	
	if(number < 2000)
	{
		rival_commission = 33.00f + 0.03 * number;
	}
	else
	{
		rival_commission = 33.00f + 0.02 * number;
	}

	if (value < 2500.00f)
	{
		commission = 30.00f + 0.017f * value;
	}
	else if (value < 6250.00f)
	{
		commission = 56.00f + 0.0066f * value;
	}
	else if (value < 20000.00f)
	{
		commission = 76.00f + 0.0034f * value;
	}
	else if (value < 50000.00f)
	{
		commission = 100.00f + 0.0022f * value;
	}
	else if (value < 500000.00f)
	{
		commission = 155.00f + 0.0011f * value;
	}
	else
	{
		commission = 255.00f + 0.0009f * value;
	}

	if (commission < 39.00f)
	{
		commission = 39.00f;
	}

	printf("Commission: $%.2f\n", commission);
	printf("rival_commission: $%.2f\n", rival_commission);

	return 0;
}
