#include <stdio.h>
#include <malloc.h>

void sort(int list[], int size){
    int i, j, minIdx, tmp;

    for(i=0; i<size-1; i++){
        minIdx = i;
        for(j=i+1; j<size; j++){
            if(list[minIdx] > list[j]) {
                minIdx = j;
            }
        }

        if(minIdx != i){
            tmp = list[i];
            list[i] = list[minIdx];
            list[minIdx] = tmp;
        }
    }
}

int main(void){

    int n;
    int *a;

    scanf("%d", &n);

    a = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
    }

    sort(a, n);

    for(int i=0; i<n; i++){
        printf("%d ", a[i]);
    }
    
    return 0;
}