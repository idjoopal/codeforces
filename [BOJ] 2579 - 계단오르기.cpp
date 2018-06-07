#include <stdio.h>

int main(){
    int n;
    int p[301] = {0, };
    long long int end_cons[301] = {0, };
    long long int end_incons[301] = {0, };
    long long int dp[301] = {0, };

    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        scanf("%d", &p[i]);
    }

    end_incons[0]=0;
    end_cons[0]=0;
    
    end_incons[1]=p[1];
    end_cons[1]=p[1];
    
    end_incons[2]=p[2];
    end_cons[2]=p[1]+p[2];

    for(int i=3; i<=n; i++){
        if(end_cons[i-2] >= end_incons[i-2])
        {
            end_incons[i] = end_cons[i-2]+p[i];
        }
        else{
            end_incons[i] = end_incons[i-2]+p[i];
        }
        end_cons[i] = end_incons[i-1]+p[i];


        if(end_incons[i] >= end_cons[i])
        {
            dp[i] = end_incons[i];
        }
        else{
            dp[i] = end_cons[i];
        }
        
    }

    printf("%lld", dp[n]);
    
    return 0;
}
