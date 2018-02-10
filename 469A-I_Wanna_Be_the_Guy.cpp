#include <stdio.h>
#include <malloc.h>

int main(void){
    int n ,p, q;
    int *a;
    int *b;
    
    scanf("%d", &n);
    b = (int*)malloc(2*n*sizeof(int));

    scanf("%d ", &p);
    a = (int*)malloc(p*sizeof(int));

    for(int i=0; i<p; i++){
        scanf("%d ", &a[i]);
        b[a[i]-1] = 1;
    }

    scanf("%d ", &q);
    a = (int*)malloc(q*sizeof(int));

    for(int j=0; j<q; j++){
        scanf("%d ", &a[j]);
        b[a[j]-1] = 1;
    }

    for(int k=0; k<n; k++){
        if(b[k] != 1){
            printf("Oh, my keyboard!"); return 0;
        }
    }
    printf("I become the guy.");
    return 0;
}