#include <stdio.h>
int main(void){
    int n, m;
    int today=0;

    scanf("%d %d", &n, &m);
    
    while(n != 0){
        today++;
        n--;
        if(today%m == 0){
            n++;
        }
    }
    printf("%d", today);

    return 0;
}
