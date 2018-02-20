#include <stdio.h>
#include <malloc.h>

int main(void){
    int n, m;
    int *a;
    __int64 cycle;

    scanf("%d %d", &n, &m);

    a = (int*)malloc(m*sizeof(int));

    for(int i=0; i<m; i++){
        scanf("%d ", &a[i]);
        if(i==0){
            cycle = a[i]-1;
        }
        else if(i>0){
            if(a[i-1]<a[i]){
                cycle += (a[i]-a[i-1]);
            }
            else if(a[i-1]>a[i]){
                cycle += (a[i]+n-a[i-1]);
            }
        }
    }
    printf("%I64d", cycle);
    return 0;
}