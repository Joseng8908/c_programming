#include <stdio.h>
#include <math.h>

int main(void)
{
	double x, new_y = 1.0f, old_y;
	
	printf("Enter a positive number: ");
	scanf("%lf", &x);

	do{
		old_y = new_y;
		new_y = (x / old_y + old_y) / 2;
	}while(fabs(old_y - new_y) > 0.00001f);

	printf("Square root: %lf", new_y);

	return 0;
}
