#include <stdio.h>

int main(void){
    int n;
    int x=0, y=0;

    scanf("%d", &n);

    //4와 n-4부터 합성수 확인
    for(int i=4;i<n;i++){
        //i가 합성수인지 확인한다. 1과 본인이 아닌 약수가 존재하면
        x=0; y=0;
        for(int j=2; j<i; j++){
            if(i%j == 0){ x=1; }
        }
        for(int k=2; k<n-i; k++){
            if((n-i)%k == 0){ y=1; }
        }

        if(x == 1 && y == 1){
            printf("%d %d", i, n-i); break;
        }
    }
    return 0;
}