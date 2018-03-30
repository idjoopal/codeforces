#include <stdio.h>

int main()
{
    int n, x;
    int sum=0;
    scanf("%d %d", &n, &x);
    
    for(int i=1; i<=n; i++){
        if(x%i == 0 && x/i <=n){
            sum++;
        }
    }

    printf("%d", sum);
    return 0;
}