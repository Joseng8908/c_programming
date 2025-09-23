#include <stdio.h>
void qsort(int arr[], int a, int b);
void partition(int arr[], int a, int b);
int pivot(int arr[], int a, int b);
void swap(int arr[], int a, int b);

void main() {
    int N;
    scanf("%d", &N);
    int arr[N];
    for(int i = 0; i < N; i++){
        scanf("%d", &arr[i]);
    }

    int left = 0;
    int right = N - 1;
    qsort(arr, left, right);
    
    for(int i = 0; i < N; i++){
        if(i != 0)
            printf("_");
        printf("%d", arr[i]);
    }
}

void qsort(int arr[], int left, int right){
    int p = pivot(arr, left, right); //p is index
    swap(arr, p, left);
    partition(arr, left, right);

    if(left == right)
        return;
    qsort(arr, p + 1, right);
    qsort(arr, left, p - 1);
}

void partition(int arr[], int low, int high){
    int left = low + 1;
    int right = high;
    int pivot = arr[0]; //arr[0] is pivot value
    while(left < right){
        if(arr[left] < pivot){
            left++;
            continue;
        }
        if(pivot > arr[right]){
            right--;
            continue;
        }
        swap(arr, left, right);
    }
    swap(arr, 0, left);
}

int pivot(int arr[], int low, int high){
    int a = arr[low];
    int c = arr[high];
    int b = arr[(int)((low+high) / 2)];

    if ((a >= b && a <= c) || (a >= c && a <= b)) {
        return low;
    } else if ((b >= a && b <= c) || (b >= c && b <= a)) {
        return (int)((a+c)/2);
    } else {
        return high;
    }
}

void swap(int arr[], int a, int b){
    int temp = 0;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}