#include <stdio.h>
#include <malloc.h>

int main(void){
    int n, m;
    int left=0;

    scanf("%d %d", &n, &m);

    for(int line=0; line<n; line++){
        if(line%2 == 1){
            if(left){
                left = 0;
                printf("#");
                for(int col=0; col<m-1; col++){
                    printf(".");
                }
            }else{
                left = 1;
                for(int col=0; col<m-1; col++){
                    printf(".");
                }
                printf("#");
            }
        }else{
            for(int col=0; col<m; col++){
                printf("#");
            }
        }
        printf("\n");
    }
    return 0;
}