#include <bits/stdc++.h>
using namespace std;

vector<int> node[1001];

int indegree[1001];
int buildTime[1001];
int temp[1001];

queue<int> q;

int t;
int n=0, k;

int topo_sort(int w){

    for(int i=1; i<=n; i++){
        if(indegree[i] == 0){
            //진입차수가 0이면 큐에 삽입
            q.push(i);
        }
    }

    //모든 노드를 방문할 때 까지 반복
    while(!q.empty()){
        int x = q.front();
        q.pop();

        for(int i=0; i<node[x].size(); i++){
            //node[x][i] : x 건물을 지어야만 지을 수 있는 다음 건물 중 하나인 y
            //temp[] : 앞의 건물을 포함해서 y건물을 짓는데 필요한 시간
            temp[node[x][i]] = max(buildTime[node[x][i]] + buildTime[x], temp[node[x][i]]);
            
            //앞의 건물을 지었으므로 진입차수를 하나씩 줄인다.
            indegree[node[x][i]]--;
            
            if(indegree[node[x][i]]==0){
                //진입차수가 0이 되어서 비로소 지을 수 있는 건물이라면
                q.push(node[x][i]);
                //해당 건물의 건설 시간 확정
                buildTime[node[x][i]] = temp[node[x][i]];
            }
        }
    }
    return buildTime[w];
}

int main(void){

    // 테스트케이스의 개수 T
    scanf("%d", &t);

    for(int z=0; z<t; z++){
        
        // 벡터 및 배열 초기화
        for(int j=0; j<=n; j++){
            node[j].clear();
        }
        memset(buildTime, 0, sizeof(buildTime));
        memset(temp, 0, sizeof(temp));
        memset(indegree, 0, sizeof(indegree));

        // 건물의 개수 N, 건설순서규칙의 개수 K
        scanf("%d %d", &n, &k);

        // 각 건물이 건설되는 시간 D
        for(int j=1; j<=n; j++){
            scanf("%d", &buildTime[j]);
            temp[j] = buildTime[j];
        }
        
        // 건물 건설 우선순위 prev next
        for(int j=0; j<k; j++){
            int prev, next;
            scanf("%d %d", &prev, &next);
            node[prev].push_back(next);
            indegree[next]++;
        }

        int w;
        scanf("%d", &w);

        printf("%d\n", topo_sort(w));
    }
    return 0;
}