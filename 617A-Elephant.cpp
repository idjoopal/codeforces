#include <stdio.h>

int main(void){
    int x;

    scanf("%d", &x);

    if(x%5 == 0){
        printf("%d", x/5);
    }else{
        printf("%d", x/5+1);
    }
    return 0;
}
