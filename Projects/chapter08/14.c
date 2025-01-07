#include <stdio.h>
#include <stdbool.h>

int main(void){

	char sentence[100];
	char terminating[2] = {'?','!'};
	char ch;
	int i = 0;
	int last, first;

	printf("Enter a sentence: ");

	while (true){
		ch = getchar();
		sentence[i] = ch;
		if (ch == '!' || ch == '?') break;
		i++;
	}
	
	printf("Reversal of sentence: ");
	
	last = i;
	first = i;
	while (true){
		if (first == 0){
			for(int word = 0; word < last; word++)
				printf("%c", sentence[word]);
			break;
		}
		else if (sentence[first] == ' '){
			for(int word = first + 1; word < last; word++) 
				printf("%c", sentence[word]);
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
