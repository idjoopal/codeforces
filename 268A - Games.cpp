#include <stdio.h>
#include <malloc.h>

int main(void){
    int n;
    int answer=0;
    int *a;

    scanf("%d", &n);
    a = (int*)malloc(2*n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d %d", &a[i*2-2], &a[i*2-1]);

        if(i>0){
            for(int j=0; j<i; j++){
                if(a[i*2-2] == a[j*2-1]){
                    answer++;
                }
                if(a[i*2-1] == a[j*2-2]){
                    answer++;
                }
            }
        }
    }
    printf("%d", answer);
    return 0;
}
