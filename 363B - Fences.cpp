#include <stdio.h>
#include <malloc.h>

int main()
{
    int n, k;
    int now_sum_k=0;
    int min_sum_k=0;

    int min_idx=0;
    int *h;
    scanf("%d %d", &n, &k);
    h = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d ", &h[i]);
        now_sum_k += h[i];

        if(i==k-1){
            min_sum_k = now_sum_k;
        }
        else if(i>k-1){
            now_sum_k -= h[i-k];
            if(min_sum_k > now_sum_k){
                min_sum_k = now_sum_k;
                min_idx = i-k+1;
            }
        }
    }

    printf("%d", min_idx+1);
    return 0;
}