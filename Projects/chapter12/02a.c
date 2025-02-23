#include <stdio.h>
#include <ctype.h>

#define SIZE 100

int main(void)
{
	int n = 0, start, end;
	char message[SIZE], message_compare[SIZE], ch;
	printf("Enter a message: ");

	while ((ch = getchar()) != '\n') {
		if ('a' <= tolower(ch) && tolower(ch) <='z') 
			message[n++] = tolower(ch);
		else
		continue;
	}

	start = 0;
	end = n - 1;
	while (start < end) {
		if (message[start] == message[end]) {
			start++;
			end--;
		}
		else {
			printf("Not a palindrome");
			return 0;
		}
	}
	printf("Palindrome");
	return 0;
}	
