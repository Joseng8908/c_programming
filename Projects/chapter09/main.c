#include <stdio.h>

int main(void)
{	
	char ch;
	for (;;) {
		printf("Enter command: ");
		scanf("%c", &ch);
		printf("%c", ch);
		if (ch == 'n') break;
	}

	return 0;
}
