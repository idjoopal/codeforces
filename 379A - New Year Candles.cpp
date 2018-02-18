#include <stdio.h>
int main(void){
    int n, m;
    int hour=0;

    scanf("%d %d", &n, &m);
    
    while(n != 0){
        hour++;
        n--;
        if(hour%m == 0){
            n++;
        }
    }
    printf("%d", hour);

    return 0;
}
