#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> pc(102);
vector<int> route(102);
vector<int> depth(102);
queue<int> q;

int target_a, target_b;

void bfs(int sx){
    int cnt = 0;

    q.push(sx);
    route[sx] = 1;
    while(!q.empty()){
        int x = q.front();
        q.pop();
        cnt++;
        for(int y:pc[x]){
            if(!route[y]){
                depth[y] = depth[x]+1;
                q.push(y);
                route[y] = 1;
            }
        }
    }
}

int main(void){
    int n;
    int m;

    scanf("%d", &n);
    scanf("%d %d", &target_a, &target_b);
    scanf("%d", &m);

    int x, y;
    for(int i=0; i < m; i++){
        scanf("%d %d", &x, &y);
        pc[x].push_back(y);
        pc[y].push_back(x);
    }

    depth[target_a] = 0;
    bfs(target_a);

    if(route[target_b] == 0){
        printf("-1");
    }else{
        printf("%d", depth[target_b]);
    }

    return 0;
}