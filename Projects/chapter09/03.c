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

void generate_random_walk(char walk[12][12]);
void print_array(char walk[12][12]);

int main(void){
	char walk[12][12] = {0};
	
	/* time */
	srand((unsigned) time(NULL));

	/* init walk to '.' */
	for (int row = 1; row <= ROW; row++)
		for (int col = 1; col <= COL; col++)
			walk[row][col] = '.';

	generate_random_walk(walk);
	print_array(walk);
	return 0;
}

void generate_random_walk(char walk[12][12])
{
	char letter = 'A';
	int direction;
	int x = START, y = START;
	/* start setting*/
	walk[y][x] = letter;

	/* game start !! */
	while (true){
		direction = rand() % DIRECTION;
		if(walk[y + 1][x] != '.' && walk[y - 1][x] != '.'
		&& walk[y][x + 1] != '.' && walk[y][x - 1] != '.')
			break;
		switch (direction){
			case UP:
			{
				if (walk[y + 1][x] != '.')
					continue;
				else
				{
					y++;
					letter++;
					walk[y][x] = letter;
					break;
				}
			}

			case DOWN:
			{
				if (walk[y - 1][x] != '.')
					continue;
				else
				{
					y--;
					letter++;
					walk[y][x] = letter;
					break;
				}
			}

			case LEFT:
			{
				if (walk[y][x - 1] != '.')
					continue;
				else
				{
					x--;
					letter++;
					walk[y][x] = letter;
					break;
				}
			}

			case RIGHT:
			{
				if (walk[y][x + 1] != '.')
					continue;
				else
				{
					x++;
					letter++;
					walk[y][x] = letter;
					break;
				}
			}

			default: /* nothing */ ;
		}

	}


}

void print_array(char walk[12][12])
{
	/* print board */
	for (int row = 1; row <= ROW; row++){
		for (int col = 1; col <= COL; col++){
			printf("%c ", walk[row][col]);
		}
		printf("\n");
	}
}

