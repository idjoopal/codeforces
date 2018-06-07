#include <stdio.h>
#include <malloc.h>

int main(){
    int n;
    int *song;
    int max_len=1;
    int how_many_appear[3001]={0,};
    int where_appear[3001]={0,};

    scanf("%d", &n);
    song = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d ", &song[i]);

        if(i>0 && song[0] == song[i]){
            how_many_appear[1]++;
            where_appear[i]++;
        }
    }

    if(how_many_appear[1] == 0){
        printf("%d", n);
        return 0;
    }
    else if(how_many_appear[1] == n){
        printf("1");
        return 0;
    }
	return 0;
}
/*  교수님의 풀이
    KMP를 쓸수도 있다.
    
    
    */

