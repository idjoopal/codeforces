#include <stdio.h>

int main(void){

    int mat[5][5];

    for(int col=0; col<5; col++){
        for(int row=0; row<5; row++){
            scanf("%d ", &mat[col][row]);
            if(mat[col][row]==1)
            {
                printf("%d", abs(2-col)+abs(2-row));
            }
        }
    }
    return 0;
}
