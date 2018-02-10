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

    int n, m;
    int now;
    int smallest=1000;

    scanf("%d %d", &n, &m);

    int* f; 
    f = (int*)malloc(m*sizeof(int)); // 할당 

    for(int i=0; i<m; i++){
        scanf("%d ", &f[i]);
    }

    sort(f, m);

    for(int k=0; k<m-n+1; k++){
        now = f[k+n-1]-f[k];
        if(now<smallest){
            smallest = now;
        }
    }
    printf("%d", smallest);

    free(f);
    return 0;
}
