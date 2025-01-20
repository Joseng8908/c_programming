#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define DICE 7

int roll_dice(void);
bool play_game(void);

int main(void)
{
	int win = 0, lose = 0;
	char is_continue, ch;
	while(true) {
		if (play_game()) win++;	
		else lose++;
		
		printf("\nPlay again? ");
		while((ch = getchar()) != '\n') 
			/* remove buffer */;
		if(is_continue != 'y' && is_continue != 'Y')
			break;
	}
	printf("\nWins: %d Losses: %d", win, lose);

	return 0;
}

int roll_dice(void)
{
	int dice1, dice2;

	srand((unsigned) time(NULL));
	dice1 = rand() % DICE;
	dice2 = rand() % DICE;

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
