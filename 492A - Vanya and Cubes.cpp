#include <stdio.h>

int main(void){
    int n, i;
    scanf("%d", &n);

    for(i=1; n>=i*(i+1)/2; i++){
        n -= i*(i+1)/2;
    }

    printf("%d", i-1);
    return 0;
}