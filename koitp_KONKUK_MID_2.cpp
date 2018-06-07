#include <stdio.h>

int main()
{
    int n;
    int s;
    long long int sum = 0;
    int cnt[5001] = {
        0,
    };
    long long int howmany[500001] = {
        0,
    };

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d ", &s);
        cnt[s]++;
    }
    for (int i = 2; i <= 500000; i++)
    {
        howmany[i] = howmany[i - 1] + i - 1;
    }
    for (int i = 1; i <= 5000; i++)
    {
        sum += howmany[ cnt[i] ];
    }

    printf("%lld", sum);

    return 0;
}