#include <bits/stdc++.h>
using namespace std;

int n, m;
int ans=0;

int arr[300][300]={0,};
int temp[300][300]={0,};
int visited[300][300]={0,};

int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int y, int x) {
    visited[y][x] = 1;
 
    for (int i = 0; i < 4; i++) {
        int nx = dx[i] + x;
        int ny = dy[i] + y;
 
        if (0 <= ny && ny < n && 0 <= nx && nx < m) {
            if (visited[ny][nx]==0 && arr[ny][nx] > 0) {
                dfs(ny, nx);
            }
        }
    }
}

int cntCluster() {
    int cluster = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (visited[i][j]==0 && arr[i][j] > 0) {
                ++cluster;
                dfs(i, j);
            }
        }
    }
    return cluster;
}

int nextYear(int y, int x) {
    int cnt = 0;
    for (int i = 0; i < 4; i++) {
        int nx = dx[i] + x;
        int ny = dy[i] + y;
 
        if (0 <= ny && ny < n && 0 <= nx && nx < m) {
            if (arr[ny][nx] <= 0 && arr[y][x] > 0) {
                ++cnt;
            }
        }
    }
    return cnt;
}

int main()
{
    scanf("%d %d", &n, &m);

    for(int row=0; row<n; row++){
        for(int col=0; col<m; col++){
            scanf("%d ", &arr[row][col]);
        }   
    }

    int tmp = 0;
    while ((tmp=cntCluster()) < 2) {
        if (tmp == 0) {
            ans = 0;
            break;
        }
        ++ans;
        memset(visited, 0, sizeof(visited));
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] > 0) {
                    temp[i][j] = nextYear(i, j);
                }
            }
        }
 
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j] -= temp[i][j];
            }
        }

    }
    printf("%d", ans);
    return 0;
}