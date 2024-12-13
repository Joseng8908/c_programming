#include <stdio.h>

int main(void)
{
	int sq1, sq2, sq3, sq4,
	sq5, sq6, sq7, sq8,
	sq9, sq10, sq11, sq12,
	sq13, sq14, sq15, sq16;	

	printf("Enter the numbers from 1 to 16 int any order: ");
	scanf("%d%d%d%d %d%d%d%d %d%d%d%d %d%d%d%d",
	&sq1, &sq2, &sq3, &sq4,
	&sq5, &sq6, &sq7, &sq8,
	&sq9, &sq10, &sq11, &sq12,
	&sq13, &sq14, &sq15, &sq16
	);

	printf("%2d %2d %2d %2d\n", sq1, sq2, sq3, sq4);
	printf("%2d %2d %2d %2d\n", sq5, sq6, sq7, sq8);
	printf("%2d %2d %2d %2d\n", sq9, sq10, sq11, sq12);
	printf("%2d %2d %2d %2d\n", sq13, sq14, sq15, sq16);

	printf("Row sums: %d %d %d %d\n",
	sq1 + sq2 + sq3 + sq4,
	sq5 + sq6 + sq7 + sq8,
	sq9 + sq10 + sq11 + sq12,
	sq13 + sq14 + sq15 + sq16
	);

	printf("Column sums: %d %d %d %d\n", 
	sq1 + sq5 + sq9 + sq13,
	sq2 + sq6 + sq10 + sq14,
	sq3 + sq7 + sq11 + sq15,
	sq4 + sq8 + sq12 + sq16
	);

	printf("Diagonal sums: %d %d", 
	sq1 + sq6 + sq11 + sq16,
	sq4 + sq7 + sq10 + sq13
	);

	return 0;
}
