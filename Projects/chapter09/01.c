#include <stdio.h>
#include <stdbool.h>

void selection_sort(int n, int arr[]);
int find_largest(int n, int arr[]);

int main(void)
{
	int size = 0;
	int arr[100] = {0,};
	char ch;

	printf("Enter a series of integers: ");
	while (true){
		scanf("%d", &arr[size]);
		size++;
		if ((ch = getchar()) == '\n') break;
	}

	selection_sort(size, arr);

	for (int i = 0; i < size; i++)
		printf("%d ", arr[i]);
	
	return 0;
}

void selection_sort(int n, int arr[])
{
	int last = n - 1;
	int temp;
	int largest = find_largest(n, arr);
	if (n == 1)
		return;
	else{
		temp = arr[last];
		arr[last] = arr[largest];
		arr[largest] = temp;
		selection_sort(last, arr);
	}
		

}

int find_largest(int n, int arr[])
{
	int max = 0;
	int loc_max;
	for (int i = 0; i < n; i++){
		if (arr[i] > max){
			loc_max = i;
			max = arr[i];
		}
		else
			continue;
	}
	return loc_max;
}

