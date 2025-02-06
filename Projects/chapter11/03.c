#include <stdio.h>

void reduce(int numerator, int denominator,
	    int *reduced_numerator, 
	    int *reduced_denumerator);

int main(void)
{
	int num, denum, reduced_num, reduced_denum;
	int n, m, temp;

	printf("Enter a fraction: ");
	scanf("%d/%d", &num, &denum);

	reduce(num, denum, &reduced_num, &reduced_denum);


	printf("In lowest terms: %d/%d", reduced_num, reduced_denum);

	return 0;
}

void reduce(int numerator, int denominator,
	    int *reduced_numerator, 
	    int *reduced_denumerator)
{
	int temp, n, m;
	n = numerator;
	m = denominator;

	for(;n != 0;)
	{	
		temp = n;
		n = m % n;
		m = temp;
	}

	*reduced_numerator = numerator / m;
	*reduced_denumerator = denominator / m;
}


