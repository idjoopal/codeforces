#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main()
{
    //10의 6승 까지의 prime수를 저장한다.
    __int64 i, k;
    __int64 era[1000001]={0, };
    __int64 primes[1000001]={0, };

    for(i=2; i<=1000000; i++){
        if(era[i] == 0){
            primes[i] = 1;

            for(k = i*2; k<=1000000; k+=i){
                era[k] = 1;
            }
        }
    }

    int n;
    __int64 x;
    __int64 sqrtx;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%I64d ", &x);
        sqrtx = (__int64)sqrt(x);

        if(x != sqrtx * sqrtx || !primes[sqrtx]){
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