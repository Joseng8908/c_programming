#include <stdio.h>
#include <stdbool.h>

#define SIZE (int)(sizeof(digit_seen) / sizeof(digit_seen[0]))
int main(void)
{
	int digit_seen[10] = {0};
	int digit;
	long n;

	printf("enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		digit_seen[digit]++;
		n /= 10;
	}
	
	printf("digit: \t     ");
	for (int i = 0; i < 10; i++)
		printf("%2d", i);

	printf("\nOccurrences: ");
	for (int i = 0; i < SIZE; i++)
		printf("%2d", digit_seen[i]);

	return 0;
}
