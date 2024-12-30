#include <stdio.h>

int main(void)
{
	float word = 1.f, length = 0.f;
	char ch;
	printf ("Enter a sentence: ");
	
	while ((ch = getchar()) != '\n')
	{
		if(ch == ' ')
		{
			word ++;
			continue;
		}
		length ++;
	}

	printf("Average word length: %.1f", length / word) ;
	return 0;
}
