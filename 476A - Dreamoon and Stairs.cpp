#include <stdio.h>

int main()
{
    int n, m;

    scanf("%d %d", &n, &m);

    for(int i=n/2 + n%2; i<=n; i++){
        if(i%m == 0){
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}