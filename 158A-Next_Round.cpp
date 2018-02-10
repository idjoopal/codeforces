#include <stdio.h>

int main(void){

    int n;  //전체 참가자
    int k;  //커트라인 등수?

    int a[50];

    scanf("%d %d", &n, &k);
    for(int i=0;i<n;i++){
        scanf("%d ", &a[i]);
    }

    if(a[k-1] == 0){    // 커트라인 등수의 점수가 0점이라면, 0점이 아닌 상위 등수를 확인한다.
        if(a[0]==0){
             printf("%d", a[0]);
             return 0;
        }
        for(int j=k-1;j>=0;j--){
            if(a[j] != 0){
                printf("%d", j+1);
                return 0;
            }
        }
    }
    else{               // 점수가 0점이 아니라면, 동점인 하위 등수를 확인한다.
        for(int j=k-1;j<n;j++){
            if(a[j] > a[j+1]){
                printf("%d", j+1);
                return 0;
            }
        }
        printf("%d", n);
    }
    return 0;
}
