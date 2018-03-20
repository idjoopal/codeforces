#include <stdio.h>
#include <malloc.h>

int main()
{
    int n, m;
    int* a;
    int* l;
    int is_exist[100001] = {0, };
    int dp[100001] = {0, };

    scanf("%d %d", &n, &m);

    a = (int*)malloc(n*sizeof(int));
    l = (int*)malloc(m*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
        is_exist[a[i]] = 1;
    }

    dp[n] = 0;
    for(int k=n; k>0; k--){
        dp[k-1] = dp[k] + is_exist[a[k-1]];
        is_exist[a[k-1]] = 0;
    }

    for(int j=0; j<m; j++){
        scanf("%d", &l[j]);
        printf("%d\n", dp[l[j]-1]);
    }

    return 0;
}