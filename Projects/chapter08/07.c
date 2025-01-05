#include <stdio.h>

#define ROW (int)(sizeof(arr) / sizeof(arr[0]))
#define COL (int)(sizeof(arr) / ROW / sizeof(arr[0][0]))

int main(void){
	int arr[5][5] = {0};
	int sum_row[5] = {0}, sum_col[5] = {0};

	for (int i = 0; i < ROW; i++){
		printf("Enter row %d: ", i + 1);
		scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1],&arr[i][2], &arr[i][3], &arr[i][4]);	
	}
	
	for (int i = 0; i < ROW; i++){
		for (int j = 0; j < COL; j++){
			sum_col[j] += arr[i][j];
			sum_row[i] += arr[i][j];
		}

	}

	printf("Row totals: ");
	for (int i = 0; i < ROW; i++) printf("%d ", sum_row[i]);
	printf("\n");
	printf("Column totals: ");
	for (int i = 0; i < COL; i++) printf("%d ", sum_col[i]);

	return 0;
}
