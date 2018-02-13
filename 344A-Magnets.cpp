#include <stdio.h>

int main(void){
    char magnet[3];
    char last;
    int n;
    int group = 1;

    scanf("%d", &n);

    scanf("%s", magnet);
    for(int i=1; i<n; i++){
        last = magnet[1];
        scanf("%s", magnet);
        if(last == magnet[0]){
            group++;
        }
    }
    printf("%d", group);
    return 0;
}