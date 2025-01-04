#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	bool digit_seen[10] = {false};
	bool digit_repeated[10] = {false};
	int digit;
	long n;

	printf("enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		if(digit_seen[digit])
			digit_repeated[digit] = true;
		digit_seen[digit] = true;
		n /= 10;
	}
	
	printf("Reqeated digiit: ");
	for (int i = 0; i < 10; i++)
		if (digit_repeated[i])
			printf("%d ", i);

	
	return 0;
}
