#include <stdio.h>

int main(void){
	
	int n, m, temp;

	printf("Enter two integers: ");
	scanf("%d %d", &n, &m);

	for(;n != 0;)
	{
		temp = n;
		n = m % n;
     		m = temp; }

	printf("Greates common divisor: %d", m);

	return 0;
}
