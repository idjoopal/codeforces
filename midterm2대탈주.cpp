/**/

#include <stdio.h>
#include <malloc.h>

int main(){
	int n, m;
    int how_many=0;
    int *color;
    int *chk_color;
    int *list;
    int chk_same=1;

	scanf("%d %d", &n, &m);

    color = (int*)malloc(m*sizeof(int));
    chk_color = (int*)malloc(m*sizeof(int));
    list = (int*)malloc(n*sizeof(int));

    for(int i=0; i<m; i++){
        chk_color[i] = 0;
        scanf("%d ", &color[i]);

        if(color[i]>0){
            how_many += color[i];
        }
    }

    for(int i=0; i<n; i++){
        scanf("%d ", &list[i]);
    }

    for(int i=0; i < n-how_many; i++){
        if(color[ list[i] ] != 0){
            for(int j=0; j < how_many; j++){
                chk_color[ list[i+j] ] ++;
            }
            for(int k=0; k<m; k++){
                if(color[k] != chk_color[k]){
                    chk_same = 0;
                }
            }
            if(chk_same == 1){
                printf("%d", i+1);
                return 0;
            }
            else{
                chk_same = 1;
                for(int z=0; z<m; z++){
                    chk_color[z] = 0;
                }
            }
        }
    }
    printf("0");
	return 0;
}
/*  교수님의 풀이
    그냥 하나씩 m개씩 보면서 체크한다.
    
    */