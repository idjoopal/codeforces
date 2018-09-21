#include <bits/stdc++.h>
using namespace std;

long long int dp[101]={0,};

int main(void){

    int n;

    scanf("%d", &n);

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 3;

    for(int i=4; i<=n; i++){
        dp[i] = dp[i-1]+1;
        for(int j=3; j<=i; j++){
            dp[i] = max(dp[i], dp[i-j] * (j-1));
        }
    }


    printf("%lld", dp[n]);
    return 0;
}
