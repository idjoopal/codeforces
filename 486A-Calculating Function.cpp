#include <stdio.h>

int main(void){
    __int64 n;

    scanf("%I64d", &n);

    if(n%2){    //홀수
        n = n/2+1;
        n *= -1;
    }
    else{
        n = n/2;
    }
    printf("%I64d", n);
    return 0;
}
