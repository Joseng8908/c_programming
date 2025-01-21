#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define DICE 6

int roll_dice(void);
bool play_game(void);

int main(void)
{
	int win = 0, lose = 0;
	char ch;
	srand((unsigned) time(NULL));
	/* game start */
	for(;;) {
		if (play_game()) win++;	
		else lose++;
		
		printf("\nPlay again? ");
		scanf(" %c", &ch);	
		if (ch == 'y' || ch == 'Y')
			continue;
		else
			break;	
	}
	printf("\nWins: %d Losses: %d", win, lose);

	return 0;
}

int roll_dice(void)
{
	int dice1, dice2;

	dice1 = rand() % DICE + 1;
	dice2 = rand() % DICE + 1;

	return dice1 + dice2;
}

bool play_game(void)
{
	int dice_sum = roll_dice();
	int point;

	printf("You rolled: %d\n", dice_sum);
	if (dice_sum == 7 || dice_sum == 11) {
		printf("You win!\n");
		return true;
	}
	else if (dice_sum == 2 || dice_sum == 3 || dice_sum == 12){
		printf("You lose!\n");
		return false;
	}
	else {
		point = dice_sum;
		printf("Your point is %d\n", point);
		while (true){
			dice_sum = roll_dice();

			printf("You rolled: %d\n", dice_sum);
			if (dice_sum == point){
				printf("You win!\n");
				return true;
			}
			else if(dice_sum == 7){
				printf("You lose!\n");
				return false;
			}
			else
				continue;
		}
	}
}
