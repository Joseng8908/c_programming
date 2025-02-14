#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main(void)
{
	int n = 0;
	char message[SIZE], ch;
	printf("Enter a message: ");

	while ((ch = getchar()) != '\n') {
		if ('a' <= tolower(ch) && tolower(ch) <='z') 
			message[n++] = ch;
		else
		continue;
	}



}
