#include <stdio.h>
#include <stdbool.h>

int main(void){

	char sentence[100];
	char terminating[2] = {'?','!'};
	char ch;
	int i = 0;
	char *last, *first;

	printf("Enter a sentence: ");

	while (true){
		ch = getchar();
		sentence[i] = ch;
		if (ch == '!' || ch == '?') break;
		i++;
	}
	
	printf("Reversal of sentence: ");
	
	last = &sentence[i];
	first = &sentence[i - 1];

	while (true){
		if (first == &sentence[0]){
			for(char *word = first; word < last; word++)
				printf("%c", *word);
			break;
		}
		else if (*first == ' '){
			for(char *word = first + 1; word < last; word++) 
				printf("%c", *word);
			printf(" ");
			last = first;
			first--;
		}
		else{
			first--;
		}
	
	}
	putchar(sentence[i]);
	
	return 0;
}
