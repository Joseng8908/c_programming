#include <stdio.h>
#include <ctype.h>

int main(void){
	int word[26] = {0};
	char first, second, temp;

	printf("Enter first word: ");
	while ((first = getchar()) != '\n'){
		if (isalpha(first))
			word[tolower(first) - 'a']++;
	}

	printf("Enter second word: ");
	while ((second = getchar()) != '\n'){
		if (isalpha(second))
			word[tolower(second) - 'a']--;
	}

	for (int i = 0; i < 26; i++){
		if (word[i] != 0){
			printf("The words are not anagrams.");
			return 0;
		}
	}

	printf("The words are anagrams.");
	return 0;
}
