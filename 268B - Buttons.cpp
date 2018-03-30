#include <stdio.h>

int main()
{
    int n;
    int sum=0;
    scanf("%d", &n);
    
    for(int i=1; n-i >= 1; i++){
        sum += i * (n-i);
    }

    printf("%d", sum+n);
    return 0;
}