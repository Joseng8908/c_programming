#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool digit_seen[10] = {false};
	int digit;
	long n;

	printf("enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		digit_seen[digit] = true;
		n /= 10;
	}
	
	printf("Reqeated digiit: ");

	
	return 0;
}
