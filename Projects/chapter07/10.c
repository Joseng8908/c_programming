#include <stdio.h>
int main(void)
{
	int vowels = 0;
	char ch;

	printf("Enter a sentence: ");
	
	while((ch = getchar()) != '\n')
	{
		switch(ch)
		{
			case 'A': case 'E': case 'I': case 'O': case 'U':
			case 'a': case 'e': case 'i': case 'o': case 'u':
			{
				vowels++;
				break;
			}

			default: ;
		}
	}

	printf("Yor sentence contains %d vowels", vowels);

	return 0;
}
