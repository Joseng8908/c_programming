#include <stdio.h>

double compute_tax(int income);

int main(void)
{
	float income;
	printf("Enter the amount of taxable income: ");
	scanf("%f", &income);
	printf("tax_due is %0.2f", compute_tax(income));

	return 0;
}
 
double compute_tax(int income)
{
	double tax_due;
	if(income < 750)
	{
		tax_due = income * 0.01f;
	}
	else if(income < 2250)
	{
		tax_due = income * 0.03f + 7.5f;
	}
	else if(income < 3750)
	{
		tax_due = income * 0.03f + 37.5f;
	}
	else if(income < 5250)
	{
		tax_due = income * 0.04f + 82.5f;
	}
	else if(income < 7000)
	{
		tax_due = income * 0.05f + 142.5f;
	}
	else
	{
		tax_due = income * 0.06f + 230.0f;
	}

	return tax_due;
}
