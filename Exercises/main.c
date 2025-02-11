#include <stdio.h>


#define N 10

int main(void)
{
	int ident[N][N];
	int *p = &ident[0][0];

	int track_of_zero = 0;
	*p++ = 1;

	for (; p <= &ident[N - 1][N - 1]; p++) {
		if (track_of_zero == 10) {
			*p = 1;
			track_of_zero = 0;
		}
		else {
			*p = 0;
			track_of_zero++;
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
	 		printf("%d ", ident[i][j]);
		}
		printf("\n");
	}
}
