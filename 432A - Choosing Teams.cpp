#include <stdio.h>
#include <malloc.h>

int main(void){
    int n, k;
    int *a;
    int count=0;

    scanf("%d %d", &n, &k);

    a = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
        if(a[i]+k <= 5){
            count++;
        }
    }

    printf("%d", count/3);

    return 0;
}