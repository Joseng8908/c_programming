#include <stdio.h>

#define ROW (int)(sizeof(arr) / sizeof(arr[0]))
#define COL (int)(sizeof(arr) / ROW / sizeof(arr[0][0]))

int main(void){
	int arr[5][5] = {0};
	int sum_row[5] = {0}, sum_col[5] = {0};
	int big[5] = {0}, small[5] = {100, 100, 100, 100, 100};
	for (int i = 0; i < ROW; i++){
		printf("Enter student%d's five scores %d: ", i + 1, i + 1);
		scanf("%d %d %d %d %d", &arr[i][0], &arr[i][1],&arr[i][2], &arr[i][3], &arr[i][4]);	
	}
	
	for (int i = 0; i < ROW; i++){
		for (int j = 0; j < COL; j++){
			sum_col[j] += arr[i][j];
			sum_row[i] += arr[i][j];

			if(big[i] < arr[i][j])
				big[i] = arr[i][j];
			if(arr[i][j] < small[i])
				small[i] = arr[i][j];
		}

	}

	for (int i = 0; i < ROW; i++){
		printf("Students%d's total score: %d\t", i + 1, sum_row[i]);
		printf("average score: %.1f\n",(float)sum_row[i] / 5.0f);
	}
	printf("==========================================================\n");

	for (int i = 0; i < COL; i++){ 
		printf("Quiz %d's average score: %d\t", i + 1, sum_col[i]);
		printf("Highest score: %d\t", big[i]);
		printf("Lowest score: %d\n", small[i]);
	}

	return 0;
}
