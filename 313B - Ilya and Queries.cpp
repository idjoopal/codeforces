#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
    char s[100000];
    int sum[100000];
    int m, l, r;

    sum[0] = 0;

    for(int i=0; ; i++){
        scanf("%c", &s[i]);
        if(s[i] != '.' && s[i] != '#') { break; }

        if(i>0){
            if(s[i-1] == s[i]){
                sum[i] = sum[i-1]+1;
            }
            else{
                sum[i] = sum[i-1];
            }
        }
    }
    sum[0] = 0;

    scanf("%d", &m);

    for(int j=0; j<m; j++){
        scanf("%d %d", &l, &r);
        printf("%d\n", sum[r-1] - sum[l-1]);
    }

    return 0;
}