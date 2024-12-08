#include <stdio.h>

int main(void)
{
	int n;
	int num = 1;
	float e = 1.00f, epsilon;

	printf("Enter n : ");
	scanf("%d", &n);
	printf("Enter epsilon : ");
	scanf("%f", &epsilon);

	for(int i = 1; i <= n; i++)
	{
		for(int j = i; j >= 1; j--)
		{
			num *= j;
		}

		e += 1.00f / num;

		if(e < epsilon)
		{
			break;
		}
	}

	printf("The approximates e is %f", e);
}
