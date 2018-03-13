#include <stdio.h>
#include <malloc.h>

int n;
int *a;

int sum_now=0;
int cnt_1 = 0, cnt_0 = 0;

int max=-1;

int main()
{
    scanf("%d", &n);

    a = (int*)malloc(n*sizeof(int));

    for(int x=0; x<n; x++){
        scanf("%d ", &a[x]);
    }
    
    for(int i=0; i<n; i++){
        for(int j=i; j<n; j++){
            for(int k=0; k<n; k++){
                if(k>=i && k<=j){
                    sum_now += 1-a[k];
                }else{
                    sum_now += a[k];
                }
            }
            if(sum_now > max){
                max = sum_now;
            }
            sum_now = 0;
        }
    }
    printf("%d", max);
    return 0;
}