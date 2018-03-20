#include <stdio.h>
#include <malloc.h>

int main()
{
    int n, k;
    int *original;
    int* a;
    int* b;
    int cnt_a=0, cnt_b=0;
    scanf("%d %d", &n, &k);

    original = (int*)malloc(n*sizeof(int));
    a = (int*)malloc(n*sizeof(int));
    b = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d ", &original[i]);
        a[i] = 0;
        b[i] = 0;
    }

    for(int j=0; j+1<n; j++){
        if(original[j]+original[j+1]+a[j]+a[j+1] < k){
            a[j+1] = k - (original[j] + a[j]) - original[j+1];
        }
        cnt_a += a[j+1];
    }

    for(int j=n-1; j-1>=0; j--){
        if(original[j-1]+original[j]+b[j-1]+b[j] < k){
            b[j-1] = k - (original[j] + b[j]) - original[j-1];
        }
        cnt_b += b[j-1];
    }

    if(cnt_a < cnt_b ){
        printf("%d\n", cnt_a);
        for(int i=0; i<n; i++){
            printf("%d ", a[i] + original[i]);
        }
    }else{
        printf("%d\n", cnt_b);
        for(int i=0; i<n; i++){
            printf("%d ", b[i] + original[i]);
        }
    }

    return 0;
}