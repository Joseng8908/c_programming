#include <stdio.h>
#include <ctype.h>

int main(void){
	
	int i = 0;
	char message[100];

	printf("Enter message: ");
	while ((message[i] = getchar()) != '\n') i++;

	printf("In B1FF-speak: ");
	for (int j = 0; j < i; j++){
		switch (toupper(message[j])){
			case 'A': printf("4"); break;
			case 'B': printf("8"); break;
			case 'E': printf("3"); break;
			case 'I': printf("1"); break;
			case 'O': printf("0"); break;
			case 'S': printf("5"); break;
			default: printf("%c", toupper(message[j]));
		}
	}

	for (int j = 0; j < 10; j++) printf("!");

	return 0;
}
