#include <stdio.h>
#include <malloc.h>

void sort(int list[], int sequence[], int size){
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

            tmp = sequence[i];
            sequence[i] = sequence[minIdx];
            sequence[minIdx] = tmp;
        }
    }
}

int main(void){
    int n;
    int *p;
    int *seq;

    scanf("%d", &n);

    p = (int*)malloc(n*sizeof(int)); // 할당
    seq = (int*)malloc(n*sizeof(int)); // 할당

    for(int i=0;i<n;i++){
        scanf("%d", &p[i]);
        seq[i] = i+1;
    }

    sort(p, seq, n);

    for(int j=0;j<n;j++){
        printf("%d ", seq[j]);
    }
    return 0;
}
