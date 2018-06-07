#include <bits/stdc++.h>
using namespace std;

int n, x, y;
vector < vector<int> > node(100010);
vector <double> node_prob(100010);
vector <int> dist(100010);
vector <int> visit(100010);
vector <int> is_end;
double prob = 0;

void dfs(int now, int dis)
{
    //방문한 노드, 노드 거리 표시
    visit[now] = 1;
    dist[now] = dis + 1;

    //더이상 나아갈 곳이 없으면 말단 노드 목록에 추가
    if(node[now].size() == 1 && now != 1){
        is_end.push_back(now);
        return;
    }

    for(int stk=0; stk < node[now].size(); stk++){
        if(visit[ node[now][stk] ] == 0){
            if(now!=1){
                node_prob[ node[now][stk] ] = node_prob[now] / (node[now].size()-1);
            }else
            {
                node_prob[ node[now][stk] ] = node_prob[now] / (node[now].size());
            }
            
            dfs(node[now][stk], dist[now]);
        }
    }
}

int main()
{
    scanf("%d", &n);

    for(int i=1; i<n; i++){
        scanf("%d %d", &x, &y);
        node[x].push_back(y);
        node[y].push_back(x);
    }

    node_prob[1] = 1.0;

    dfs(1, -1);

    for(int stk=0; stk < is_end.size(); stk++){
        prob += ( node_prob[ is_end[stk] ] * dist[ is_end[stk] ] );
    }
    
    printf("%.6lf", prob);

    return 0;
}