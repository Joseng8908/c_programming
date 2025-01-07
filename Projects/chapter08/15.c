#include <stdio.h>
#include <stdbool.h>

int main(void){
	
	char ch;
	char message[80];
	int  i = 0, j = 0, n;

	printf("Enter message to be encrypted: ");
	while (true){
		ch = getchar();
		message[i] = ch;
		if (ch == '\n') break;
		i++;
	}

	printf("Enter shift amount (1-25): ");
	scanf("%d", &n);
	
	printf("Encrypted message: ");
	while (message[j] != '\n'){

		if ('A' <= message[j] && message[j] <= 'Z')
			printf("%c", ((message[j] - 'A') + n) % 26 + 'A');
		else if ('a' <= message[j] && message[j] <= 'z')
			printf("%c", ((message[j] - 'a') + n) % 26 + 'a');
		else
			printf("%c", message[j]);
		j++;
	}
	
	return 0;
}
