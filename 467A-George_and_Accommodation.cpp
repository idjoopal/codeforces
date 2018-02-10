#include <stdio.h>

int main(void){
    int n, a, q;
    int cnt=0;

    scanf("%d", &n);
    
    for(int i=0;i<n;i++){
        scanf("%d %d", &a, &q);
        if(q-a >=2){
            cnt++;
        }
    }

    printf("%d", cnt);
    
    return 0;
}
