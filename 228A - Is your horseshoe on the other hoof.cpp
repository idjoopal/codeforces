#include <stdio.h>

int main(void){
    int a[4];
    int other=0;
    int count=0;

    scanf("%d %d %d %d", &a[0], &a[1], &a[2], &a[3]);

    for(int i=0; i<3; i++){
        for(int j=i+1; j<4; j++){
            if(a[i] == a[j]){
                count++;
                while(other == a[0] || other == a[1] || other == a[2] || other == a[3]){
                    other++;
                }
                a[j] = other;
            }
        }
    }
    printf("%d", count);
    return 0;
}