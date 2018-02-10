#include <stdio.h>

int main(void){
    __int64 n,k;
    
    scanf("%I64d %I64d", &n, &k);

    if(n%2==0){            //짝수
        if(k > n/2){    //답이 짝수
            printf("%I64d", 2*(k-n/2));
        }
        else{           //답이 홀수
            printf("%I64d", 2*k-1);
        }
    }else{//홀수
        if(k > n/2+1){    //답이 짝수
            printf("%I64d", 2*(k-1-n/2));
        }
        else{           //답이 홀수
            printf("%I64d", 2*k-1);
        }
    }
    return 0;
}