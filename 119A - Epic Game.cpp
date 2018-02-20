#include <stdio.h>

int gcd(int num, int heap){
    int small, result;

    if(num == 0){
        return heap;
    }
    else if(heap == 0){
        return num;
    }

    if(num>= heap){
        small = heap;
    }
    else{
        small = num;
    }

    for(int i=1; i<=small; i++){
        if(heap%i == 0 && num%i == 0){
            result = i; 
        }
    }

    return result;
}
int main(void){
    int a, b, remain;
    int turn_Simon = 1;

    scanf("%d %d %d", &a, &b, &remain);

    while(remain >= 0){
        if(turn_Simon){
            remain -= gcd(a, remain);
            turn_Simon = 0;
        }else{
            remain -= gcd(b, remain);
            turn_Simon = 1;
        }
    }

    printf("%d", !turn_Simon);
    return 0;
}