#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
	printf("%d", gcd(12, 28));
	return 0;
}

int gcd(int m, int n)
{
	int temp;
	
	if(n == 0) 
		return m;
	else
		return gcd(n, m % n);
}


