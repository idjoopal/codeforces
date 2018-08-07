#include <bits/stdc++.h>
using namespace std;

const int MAX = 1001;
int visit[MAX];
vector<int> adj[MAX];
queue<int> q;

void dfs(int x){
    visit[x] = 1;
    printf("%d ", x);
    for(int y:adj[x]){
        if(!visit[y]){
            dfs(y);
        }
    }
}

void bfs(int sx){
    q.push(sx);
    visit[sx] = 1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        printf("%d ", x);
        for(int y:adj[x]){
            if(!visit[y]){
                q.push(y);
                visit[y] = 1;
            }
        }
    }
}

int main(){
    int n, m, v;
    scanf("%d %d %d", &n, &m, &v);

    for(int i=0; i<m; i++){
        int s, e;
        scanf("%d %d", &s, &e);
        adj[s].push_back(e);
        adj[e].push_back(s);
    }
    for(int i=1; i<=n; i++){
        sort(adj[i].begin(), adj[i].end());
    }
    dfs(v);
    puts("");
    memset(visit, 0, sizeof(visit));
    bfs(v);
    puts("");

    return 0;
}