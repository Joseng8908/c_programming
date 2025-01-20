#include <stdio.h>
#include <stdbool.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void){
	int n;
	printf("This program creates a magic square of a specified size.\n");
	printf("The size must be an odd number between 1 and 99.\n");
	printf("Enter size of magic square: ");
	scanf("%d", &n);

	/* init */
	int magic_square[n][n];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < n; j++)
			magic_square[i][j] = 0;
	/* make */
	create_magic_square(n ,magic_square);
	/* printf */
	print_magic_square(n,magic_square);

	return 0;		
}

void create_magic_square(int n, int magic_square[n][n])
{

	int center, x, y, i = 1;
	center =(int)(n / 2);
	x = center;
	y = 0;
	magic_square[y][x] = i;
	i++;


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


}

void print_magic_square(int n, int magic_square[n][n])
{
		for (int j = 0; j < n; j++){
		for (int k = 0; k < n; k++){
			printf("%2d ", magic_square[j][k]);
		}
		printf("\n");
	}	
}
