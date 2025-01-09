#include <stdio.h>
#include <stdbool.h>

int main(void){
	int n, center, x, y, i = 1;
	int sum_row = 0, sum_col = 0;

	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);

	/* init */
	int magic_square[n][n];

	for (int j = 0; j < n; j++)
		for (int k = 0; k < n; k++)
			magic_square[j][k] = 0;

	center =(int)(n / 2);
	x = center;
	y = 0;
	magic_square[y][x] = i;
	i++;

	/* make */
	while (i <= (n * n)){
		if (magic_square[(y - 1 + n) % n][(x + 1 + n) % n] == 0){
			y = (y - 1 + n) % n;
			x = (x + 1 + n) % n;
			magic_square[y][x] = i; 
		}

		else if (magic_square[(y - 1 + n) % n][(x + 1 + n) % n] != 0){
			y = (y + 1 + n) % n;
			magic_square[y][x] = i;
		}
		i++;
	}

	/* printf */
	for (int j = 0; j < n; j++){
		for (int k = 0; k < n; k++){
			printf("%2d ", magic_square[j][k]);
			sum_row += magic_square[j][k];

		}
		printf("--sum: %d", sum_row);
		printf("\n");
	}
	return 0;		
}
