#include <stdio.h>
#include <math.h>

int main(void){
    int a, b;
    int min;
    scanf("%d %d", &a, &b);

    if(a>=b){
        min = b;
    }else{
        min = a;
    }
    printf("%d %d", min, abs(a-b)/2);
    
    return 0;
}