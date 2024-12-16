#include <stdio.h>

int main(void)
{
	int i, n;
	char enter;

	printf("This program prints a table of squares. \n");
	printf("Enter number of entries in table: ");
	scanf("%d", &n);

	while(getchar() != '\n') ;

	for(i = 1; i <= n; i++)
	{
		printf("%10d%10d\n", i, i * i);//when i is 46341, this program failure

		if(i % 24 == 0)
		{
     			printf("Press Enter to continue...");
			enter = getchar();
			if(enter != '\n')
			{
				break;
			}
		}
	}
	return 0;
}
