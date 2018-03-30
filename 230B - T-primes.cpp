#include <stdio.h>
#include <math.h>

int isPrime(__int64 n) 
{
    __int64 i; 
    // 2부터 n의 절반까지 나눠서 안나눠지면 소수
    for (i = 2; i <= n/2; ++i) 
    {
        if (n % i == 0) 
        {
            return 0; 
        }
    }
    return 1; 
}

int main()
{
    int n;
    __int64 x;
    __int64 sqrtx;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%I64d ", &x);
        sqrtx = (__int64)sqrt(x);

        if(x==1 || x != sqrtx * sqrtx){
            printf("NO\n");
        }
        else if(x != 2 && x != 4 && x%2 == 0)
        {
            printf("NO\n");
        }
        else if(!isPrime(sqrtx))
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}

// prime수의 제곱이 T-prime이 된다.
// 10^6까지의 prime수를 찾는다.