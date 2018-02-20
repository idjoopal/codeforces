#include <stdio.h>

int main(void){
    int n;
    int d;
    double sum = 0;
    
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d ", &d);
        sum += d;
    }

    printf("%.12f", sum/n);
    return 0;
}
