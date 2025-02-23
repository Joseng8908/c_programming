#include <stdio.h>

#define SIZE (sizeof(message) / sizeof(message[0]))

void Reverse_message(char *message, int n);

int main(void)
{	
	int n = 0;
	char message[100], ch;
	printf("Enter a message: ");

	for (int i = 0; i < SIZE; i++) {
		ch = getchar();
		if (ch == '\n')
			break;
		else {
			message[i] = ch;
			n++;
		}
	}  

	Reverse_message(message, n);

	return 0;
}

void Reverse_message(char *message, int n)
{
	char *p = message;
	p = p + n;
	printf("Reversal is: ");
	for (;p >= message; p--)
		printf("%c", *p);
}
