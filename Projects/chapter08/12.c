#include <ctype.h>
#include <stdio.h>
#include <crypt.h>

#define UPPER 65
int main(void)
{
	int value[26] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 
			1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
	int sum = 0;
	char ch;

	printf("Enter a word: ");
	while((ch = getchar()) != '\n')
	{
		sum += value[toupper(ch) - UPPER];
	}

	printf("Scrabble value: %d", sum);

	return 0;
}
