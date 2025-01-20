#include <stdio.h>

int compute_polynomial(int x);

int main(void)
{
	int x;

	printf("Enter x: ");
	scanf("%d", &x);
	
	printf("The value of 3x^5 + 2x^4 - 5x^3 - x^2 + 7x^ - 6: %d", 
	compute_polynomial(x));

	return 0;

}

int compute_polynomial(int x)
{
	return ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6;
}
