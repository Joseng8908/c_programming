#include <stdio.h>
#include <stdbool.h>

int main(void)
{
	while(1) {
		bool digit_seen[10] = {false};
		int digit;
		long n;

		printf("enter a number: ");
		scanf("%ld", &n);
		
		if (n <= 0) break;
		while (n > 0) {
			digit = n % 10;
			if (digit_seen[digit])
				break;
			digit_seen[digit] = true;
			n /= 10;
		}

		if (n > 0)
			printf("Reqeated digiit\n");
		else
			printf("No repeated digit\n");
	}
	return 0;
}
