#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define ROW 10
#define COL 10
#define UP 0
#define DOWN 1
#define LEFT 2
#define RIGHT 3
#define START 1
#define DIRECTION 4

int main(void){
	char front_board[12][12] = {0};
	int x = START, y = START;
	int direction;
	char letter = 'A';
	
	/* time */
	srand((unsigned) time(NULL));

	/* init front_board to '.' */
	for (int row = 1; row <= ROW; row++)
		for (int col = 1; col <= COL; col++)
			front_board[row][col] = '.';

	/* start setting*/
	front_board[y][x] = letter;

	/* game start !! */
	while (true){
		direction = rand() % DIRECTION;
		if(front_board[y + 1][x] != '.' && front_board[y - 1][x] != '.'
		&& front_board[y][x + 1] != '.' && front_board[y][x - 1] != '.')
			break;
		switch (direction){
			case UP:
			{
				if (front_board[y + 1][x] != '.')
					continue;
				else
				{
					y++;
					letter++;
					front_board[y][x] = letter;
					break;
				}
			}

			case DOWN:
			{
				if (front_board[y - 1][x] != '.')
					continue;
				else
				{
					y--;
					letter++;
					front_board[y][x] = letter;
					break;
				}
			}

			case LEFT:
			{
				if (front_board[y][x - 1] != '.')
					continue;
				else
				{
					x--;
					letter++;
					front_board[y][x] = letter;
					break;
				}
			}

			case RIGHT:
			{
				if (front_board[y][x + 1] != '.')
					continue;
				else
				{
					x++;
					letter++;
					front_board[y][x] = letter;
					break;
				}
			}

			default: /* nothing */ ;
		}

	}

	/* print board */
	for (int row = 1; row <= ROW; row++){
		for (int col = 1; col <= COL; col++){
			printf("%c ", front_board[row][col]);
		}
		printf("\n");
	}
	return 0;
}
