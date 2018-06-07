#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, ans=0;
int* is_cat;
int* visited;
vector< vector<int> > graph(100001);
//2차원 벡터

void dfs(int now, int cons_cat){
    int is_leaf = 1;
    int sum=0;

    visited[now] = 1;

    if(cons_cat > m) { return; };
    //고양이를 너무 많이 보았다면 더이상 탐색 중지

    for(int stk=0; stk < graph[now].size() ; stk++){
        if(!visited[graph[now][stk]]){
            if(is_cat[graph[now][stk]]){
                sum = cons_cat + 1;
            }else{
                sum = 0;
            }
            //다음에 탐색할 노드에서 고양이가 연속으로 나타난다면 연속+1을 하고
            //나타나지 않았다면 연속이 끊겼으므로 0
            is_leaf = 0;
            //하나라도 탐색할 노드가 있었다면 leaf가 아니다.
            dfs(graph[now][stk], sum);
        }
    }
    if(is_leaf){
        //지나온 노드 외엔 탐색할 노드가 없다면 leaf노드이므로 답+1
        ans++;
    }
}
int main(){

    scanf("%d %d", &n, &m);
    is_cat = (int*)malloc((n+1)*sizeof(int));
    visited = (int*)malloc((n+1)*sizeof(int));

    for(int i=1; i<=n; i++){
        scanf("%d ", &is_cat[i]);
        visited[i] = 0; 
    }

    for(int j=0; j<n-1; j++){
        scanf("%d %d", &x, &y);
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    dfs(1, is_cat[1]);

    printf("%d", ans);

    return 0;
}