#include <bits/stdc++.h>
using namespace std;

int main(void){

    int cnt=0;

    char input[5010];
    int dp[5010];
    
    dp[0]=1;
    dp[1]=1;

    scanf("%s", input);
    
    for(int i=2; i<=strlen(input); i++){
        int now = i-1;
        if(input[now] > '0'){
            dp[i] = dp[i-1];
        }

        int su = (input[now-1]-'0') * 10 + (input[now]-'0');
        if(su >=10 && su <= 26){
            dp[i] = (dp[i] + dp[i-2]) % 1000000;
        }
    }

    if(input[0] == '0'){
        printf("0");
    }else{
        printf("%d", dp[strlen(input)]);
    }
    return 0;
}
