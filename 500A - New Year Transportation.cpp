#include <stdio.h>
#include <malloc.h>

int main(void){
    int n;
    int dest;
    int now=1;

    int *a;
    scanf("%d %d", &n, &dest);
    a = (int*)malloc((n+1)*sizeof(int));

    for(int i=1; i<=n ; i++){
        scanf("%d ", &a[i]);
    }

    while(now <= n){
        now += a[now];
        if(now == dest){
            printf("YES");
            return 0;
        }
        if(now > dest){
            printf("NO");
            return 0;
        }
    }
    return 0;
}