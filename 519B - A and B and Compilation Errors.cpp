#include <stdio.h>
#include <malloc.h>

int main()
{
    __int64 sum_a=0;
    __int64 sum_b=0;
    __int64 sum_c=0;

    int n;
    __int64 a, b, c;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%I64d", &a);
        sum_a += a; 
    }
    for(int i=0; i<n-1; i++){
        scanf("%I64d", &b);
        sum_b += b; 
    }
    for(int i=0; i<n-2; i++){
        scanf("%I64d", &c);
        sum_c += c; 
    }

    printf("%I64d\n%I64d", sum_a-sum_b, sum_b-sum_c);
    return 0;
}