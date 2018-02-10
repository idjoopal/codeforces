#include <stdio.h>

int main(void){
    int n,m;
    int who = 0;
    scanf("%d %d", &n, &m);

    while(n !=0 && m != 0){
        n -= 1;
        m -= 1;
        if(who == 1){
            who = 0;
        }else{
            who = 1;
        }
    }

    if(who == 0){
        printf("Malvika");
    }else{
        printf("Akshat");
    }
    return 0;
}