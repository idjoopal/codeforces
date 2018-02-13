#include <stdio.h>
#include <malloc.h>

// 맨 왼쪽이 최대, 맨 오른쪽이 최소.
// 왼쪽 부터 최댓값을 찾고, 오른쪽부터 최솟값을 찾는다.
int main(void){
    int n;
    int *a;
    int min = 101;
    int max = -1;
    int min_idx = 0;
    int max_idx = 0;
    
    scanf("%d", &n);
    a = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
        if(a[i] > max){
            max = a[i];
            max_idx = i;
        }
    }
    for(int j=n-1; j>=0; j--){
        if(a[j] < min){
            min = a[j];
            min_idx = j;
        }
    }

    if(min_idx < max_idx){
        printf("%d", n-1-min_idx+max_idx-1);
    }
    else{
        printf("%d", n-1-min_idx+max_idx);
    }
    return 0;
}