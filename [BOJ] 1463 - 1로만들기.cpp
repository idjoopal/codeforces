#include <stdio.h>

int main(){
    int n;
    int dp[1000001] = {0, };

    scanf("%d", &n);

    dp[0] = 0;
    dp[1] = 0;
    dp[2] = 1;

    for(int i=3; i<=n; i++){
        dp[i] = dp[i-1]+1;

        if(i%2==0 && dp[i]-1 > dp[i/2]){
            dp[i] = dp[i/2]+1;
        }
        if(i%3==0 && dp[i]-1 > dp[i/3]){
            dp[i] = dp[i/3]+1;
        }
    }

    printf("%d", dp[n]);
    return 0;
}