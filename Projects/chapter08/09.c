#include <stdio.h>
#include <stdbool.h>

#define ROW 10
#define COL 10
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define START 1

int main(void){
	char front_board[12][12] = {0};
	int x = START, y = START;


	/* init front_board to '.' */
	for (int row = 1; row <= ROW; row++)
		for (int col = 1; col <= COL; col++)
			front_board[row][col] = '.';

	/* start setting*/
	front_board[y][x] = 'A';

	/* game start !! */
	while (front_board[y][x] < 91){
		
	}

	/* print board */
	for (int row = 1; row <= ROW; row++){
		for (int col = 1; col <= COL; col++){
			printf("%c", front_board[row][col]);
		}
		printf("\n");
	}



}
