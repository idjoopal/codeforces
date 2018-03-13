#include <stdio.h>

int main(void){
    int k, r;
    int remain;

    scanf("%d %d", &k, &r);
    remain = k % 10;

    for(int i=1; ;){
        if(remain == r || remain == 0){
            printf("%d", i);
            break;
        }
        i++;
        remain = k * i % 10;
    }
    return 0;
}