#include <stdio.h>

int main(void)
{
	int n;
	int num = 1;
	float e = 1.00f;

	printf("Enter n : ");
	scanf("%d", &n);

	for(int i = 1; i <= n; i++)
	{
		for(int j = i; j >= 1; j--)
		{
			num *= j;
		}

		e += 1.00f / num; 
	}

	printf("The approximates e is %f", e);
}
