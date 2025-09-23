#include <stdio.h>

void qsort(int arr[], int a, int b);
int partition(int arr[], int a, int b, int p);
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
    int newPivot = partition(arr, left, right, p);

    if(left >= right)
        return;
    qsort(arr, newPivot + 1, right);
    qsort(arr, left, newPivot - 1);
}

int partition(int arr[], int low, int high, int p){
    int left = low + 1;
    int right = high;
    int pivotValue = arr[p]; //arr[low] is pivot value
    swap(arr, low, p);
    while(left <= right){
        if(arr[left] < pivotValue){
            left++;
            continue;
        }
        if(pivotValue > arr[right]){
            right--;
            continue;
        }
        swap(arr, left, right);
        left++;
        right--;
    }
    swap(arr, low, right);
    return right;
}

int pivot(int arr[], int low, int high){
    int a = arr[low];
    int c = arr[high];
    int b = arr[(int)((low+high) / 2)];

    if ((a >= b && a <= c) || (a >= c && a <= b)) {
        return low;
    } else if ((b >= a && b <= c) || (b >= c && b <= a)) {
        return (int)((low+high)/2);
    } else {
        return high;
    }
}

void swap(int arr[], int a, int b){
    int temp = 0;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    return;
}