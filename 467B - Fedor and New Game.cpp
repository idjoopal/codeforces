#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main()
{
    int n, m, k;
    int cnt=0;
    int is_friends=0;
    int dec;
    int **bin;

    scanf("%d %d %d", &n, &m, &k);

    bin = (int**)malloc((m+1)*sizeof(int*));

    for(int i=0; i < m+1; i++){
        bin[i] = (int*)malloc(n*sizeof(int));
        scanf("%d", &dec);
        for(int j=n-1; j >= 0; j--){
            if(dec >= pow(2,j)){
                bin[i][n-1-j] = 1;
                dec = dec-pow(2,j);
            }else{
                bin[i][n-1-j] = 0;
            }
        }
    }

    for(int x=0; x < m; x++){
        for(int y=0; y < n; y++){
            if(bin[x][y] != bin[m][y]){
                cnt++;
            }
        }
        if(cnt <= k){
            is_friends++;
        }
        cnt = 0;
    }
    printf("%d", is_friends);

    return 0;
}
