#include <stdio.h>

int main(void)
{
	char first_initial, last_name[20], ch;
	int i = 0;
	printf("Enter a first and last name: ");
	
	while ((first_initial = getchar()) == ' ');
	while ((ch = getchar()) != ' ');
	while ((last_name[i] = getchar()) != '\n') i++;

	for (int j = 0; last_name[j] != '\n'; j++)
		printf("%c", last_name[j]);

	printf(", %c.", first_initial);
}

