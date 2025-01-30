#include <stdio.h>

#define MAX_DIGITS 10

void clear_digits_array(void);
void process_digit(int digit, int position);
void print_digits_array(void);

/* external variables */
int segments[10][7] = { {1, 1, 1, 1, 1, 1, 0},
			{0, 1, 1, 0, 0, 0, 0},
			{1, 1, 0, 1, 1, 0, 1},
			{1, 1, 1, 1, 0, 0, 1},
			{0, 1, 1, 0, 0, 1, 1},
			{1, 0, 1, 1, 0, 1, 1},
			{1, 0, 1, 1, 1, 1, 1},
			{1, 1, 1, 0, 0, 0, 0},
			{1, 1, 1, 1, 1, 1, 1},
			{1, 1, 1, 1, 0, 1, 1} };
char digits[4][MAX_DIGITS * 4];

int main(void)
{
	char ch;
	int position = 0;
	
	clear_digits_array();

	printf("Enter a number: ");
	
	while ((ch = getchar()) != '\n'){
		if (0 <= (ch - '0') && (ch - '0') <= 9) {
			position++;
			process_digit((int)(ch - '0'), position);
		}
		else
			continue;
	}
	
	print_digits_array();

	return 0;
}

void clear_digits_array(void)
{
	for (int i = 0; i < 4; i++) 
		for (int j = 0; j < MAX_DIGITS * 10; j++)
			digits[i][j] = ' ';
}

void process_digit(int digit, int position)
{
	int range_1 = (position * 4) - 4;
	int range_2 = (position * 4) - 1;

	for (int i = 0; i < 7; i++) {
		if (segments[digit][i]) {
			switch (i) {
				case 0: digits[0][range_1 + 1] = '_'; break;
				case 1: digits[1][range_2 - 1] = '|'; break;
				case 2: digits[2][range_2 - 1] = '|'; break;
				case 3: digits[2][range_1 + 1] = '_'; break;
				case 4: digits[2][range_1] = '|'; break;
				case 5: digits[1][range_1] = '|'; break;
				case 6: digits[1][range_1 + 1] = '_'; break;
			}
		}

	}
}

void print_digits_array(void)
{
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < MAX_DIGITS * 4; j++) {
			printf("%c", digits[i][j]);
		}
		printf("\n");
	}
}
