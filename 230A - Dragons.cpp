#include <stdio.h>
#include <malloc.h>

void sort(int list[], int list2[],int size){
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

            tmp = list2[i];
            list2[i] = list2[minIdx];
            list2[minIdx] = tmp;
        }
    }
}

int main(void){
    int hp, n;
    int **drg;

    scanf("%d %d", &hp, &n);

    drg = (int**)malloc(2*sizeof(int*));

    for(int i=0; i<2; i++){
        drg[i] = (int*)malloc(n*sizeof(int));
        
    }
    for(int i=0; i<n; i++){
        scanf("%d %d", &drg[0][i], &drg[1][i]);
    }

    sort(drg[0], drg[1], n);

    for(int i=0; i<n; i++){
        if(hp <= drg[0][i]){
            printf("NO");
            return 0;
        }
        else{
            hp += drg[1][i];
        }
    }

    printf("YES");
    return 0;
}