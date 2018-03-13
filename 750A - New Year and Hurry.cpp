#include <stdio.h>

int main(void){
    int n, k;
    int i, remain;
    scanf("%d %d", &n, &k);
    remain = 240-k;

    if(remain<5){
        printf("0"); return 0;
    }else
    {
        for(i=1; remain >= 5*i ; i++){
            remain -= 5*i;
        }
        if(i-1 > n){
            i = n+1;
        }
    }
    
    printf("%d", i-1);
    return 0;
}

