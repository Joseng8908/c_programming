#include <stdio.h>

int main() {
    int N, x;
    scanf("%d %d", &N, &x);
    seqSearch(N, x);
    binarySearch(N, x);
    
    return 0;
  
}

int seqSearch(int N, int x) {
    int count = 0;
    bool err = 0;
    for(int i = 0; i < N; i++){
        if(i == N) {
            break;
        }
        else{
            count++;
        }
        err = 1;
    }

    if(err = 1){
        printf("-1 %d", i);
    }
    else{
        printf("%d %d", i, count);
    }
}

int binarySearch(int N, int x){
    
}