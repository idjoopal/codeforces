#include <stdio.h>
#include <malloc.h>

int main(){
    int n;
    int *com;
    int chk_cable=0;
    int now_cluster=1;
    long long int dist=0;

    scanf("%d", &n);
    com = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d ", &com[i]);
        
        if(com[i] == 1){
            int j = 1;
            chk_cable = 0;
            while(chk_cable < 5 || i-j >= 0){
                if(com[i-j] == 0){
                    chk_cable ++;
                    dist += j;
                }
                j++;
            }
        }
    }

    if(com[n-1] == 0){
        int k=0;
        while(com[n-1-k] == 0 && k<4){
            now_cluster++;
            k++;
        }
    }

    for(int i=0; i<n-4; i++){
        if(i+4 < n){
            if(com[i] + com[i+1] + com[i+2] + com[i+3] + com[i+4] == 0)
            {
                now_cluster++;
            }
        }
    }

    printf("%lld %d", dist, now_cluster);

	return 0;
}
/*  교수님의 풀이
    dfs를 사용하면?
    0은 1과 붙어있는지 안붙어있는지만 체크
    1의 개수와 공통된 0을 소유하고 있는지 체크
    */