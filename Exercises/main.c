#include <stdio.h>

int digit(int n, int k);

int main(void)
{
	double x;
	int i;

	x = digit(83, 12);

	return 0;
}


int digit(int n, int k)
{
	int digit = 0, num = 0;
	while (digit < k){
		digit++;
		num = n % 10;
		n = n / 10;
	}

	if(n == 0)
		return 0;
	else
		return num;
}
