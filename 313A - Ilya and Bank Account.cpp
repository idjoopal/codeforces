#include <stdio.h>

int main(void){
    int n;
    int maximize;
    int last_d;

    scanf("%d", &n);

    if(n>=0){
        maximize = n;
    }
    else{
        last_d = n%10;
        maximize = n/100*10+last_d;

        if(maximize < n/10){
            maximize = n/10;
        }
    }
    

    printf("%d", maximize);

    return 0;
}
