#include <stdio.h>
#include <string.h>
#include <malloc.h>

int n, m, k, s = 0;
int dx[4] = { 1, 0, -1, 0 };
int dy[4] = { 0, -1, 0, 1 };
char **maze;
int **visited;
int visit_cell = 0;

void dfs(int x, int y, int prev_x, int prev_y){
    if (x < 0 || x >= n || y < 0 || y >= m)
    {
        return;
    }
    if (maze[x][y] != '.')
    {
        return;
    }
    if (visited[x][y] == 1)
    {
        return;
    }

    visited[x][y] = 1;
    visit_cell++;

    for (int i = 0; i < 4; i++)
    {
        int next_x = x + dx[i];
        int next_y = y + dy[i];
        if (next_x == prev_x && next_y == prev_y)
        {
            continue;
        }
        dfs(next_x, next_y, x, y);
    }
    if(k!=0)
    {
        k--;
        maze[x][y]='X';
    }
}

int main()
{
    scanf("%d %d %d", &n, &m, &k);

    maze = (char **)malloc(n * sizeof(char *));
    visited = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++)
    {
        maze[i] = (char *)malloc((m+1) * sizeof(char));
        visited[i] = (int *)malloc(m * sizeof(int));
    }

    for(int i=0; i<n; i++){
        scanf("%s", maze[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = 0;
            if(maze[i][j] == '.'){
                s++;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j])
            {
                dfs(i, j, -1, -1);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%c", maze[i][j]);
        }
        printf("\n");
    }
    return 0;
}
