#include <stdio.h>
#include <string.h>
#include <malloc.h>

int cycle = 0;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int** visited;

int dfs(int x, int y, int prev_x, int prev_y, char color){
    visited[y][x] = 1;
    int next_x, next_y;

    for(int i=0; i<4; i++){
        next_x = x + dx[i];
        next_y = y + dy[i];
        if(next_x == prev_x && next_y == prev_y){
            continue;
        }else{
            dfs(next_x, next_y, x, y, )
        }
    }
}

int main()
{
    int n, m;
    char** input;
    scanf("%d %d", &n, &m);

    input = (char**)malloc((n+1)*sizeof(char*));
    visited = (int**)malloc((n)*sizeof(int*));

    for(int i=0; i<n; i++){
        input[i] = (char*)malloc((m+1)*sizeof(char));
        visited[i] = (int*)malloc((m)*sizeof(int));
    }

    for(int i=0; i<n; i++){
        scanf("%s", input[i]);
    }

    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            dfs(j, i, input[j][i]);
        }
    }


    if(cycle){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}

/* 
교수님의 설명

*/