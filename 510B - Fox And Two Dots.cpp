#include <stdio.h>
#include <string.h>
#include <malloc.h>

int cycle = 0;
int dx[4] = {1, -1, 0, 0};
int dy[4] = {0, 0, 1, -1};
int **visited;
char **input;
int n, m;

void dfs(int x, int y, int prev_x, int prev_y, char color)
{
    //printf("%d %d, prev %d %d, color %c\n", x, y, prev_x, prev_y, color);
    if (x < 0 || x >= n || y < 0 || y >= m)
    {
        return;
    }
    if (color != input[x][y])
    {
        return;
    }
    if (visited[x][y] == 1)
    {
        cycle = 1;
        return;
    }

    visited[x][y] = 1;

    for (int i = 0; i < 4; i++)
    {
        int next_x = x + dx[i];
        int next_y = y + dy[i];
        if (next_x == prev_x && next_y == prev_y)
        {
            continue;
        }
        dfs(next_x, next_y, x, y, color);
    }
}

int main()
{
    scanf("%d %d", &n, &m);

    input = (char **)malloc(n * sizeof(char *));
    visited = (int **)malloc(n * sizeof(int *));

    for (int i = 0; i < n; i++)
    {
        input[i] = (char *)malloc((m + 1) * sizeof(char));
        visited[i] = (int *)malloc(m * sizeof(int));
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%s", input[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            visited[i][j] = 0;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (!visited[i][j])
            {
                dfs(i, j, -1, -1, input[i][j]);
            }
        }
    }

    if (cycle)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
