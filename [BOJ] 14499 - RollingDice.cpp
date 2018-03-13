#include <stdio.h>
#include <malloc.h>

typedef struct Dice_plane{
    int east;
    int west;
    int south;
    int north;
    int num;
}DICEPLANE;

typedef struct Dice{
    DICEPLANE face[7] = {
        {0, 0, 0, 0, 0},   
        {3, 4, 5, 2, 0},
        {3, 4, 1, 6, 0},
        {6, 1, 5, 2, 0},
        {1, 6, 5, 2, 0},
        {3, 4, 6, 1, 0},
        {3, 4, 2, 5, 0}
    };
    int now_x;
    int now_y;
}DICE;


int main(void){
    int n, m, x, y, k;
    int **map;
    int *oper;

    scanf("%d %d %d %d %d", &n, &m, &x, &y, &k);

    map = (int**)malloc(n*sizeof(int*));

    for(int i=0; i<n; i++){
        map[i] = (int*)malloc(m*sizeof(int));
    }

    for(int col=0; col<n; col++){
        for(int row=0; row<m; row++){
            scanf("%d ", &map[col][row]);
        }
    }

    for(int op=0; op<k; op++){
        scnaf("%d ", &oper[op]);
    }

    DICE dice;
    dice.now_x = x;
    dice.now_y = y;






    return 0;
}
