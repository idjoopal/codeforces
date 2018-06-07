#include <bits/stdc++.h>

using namespace std;

int n, x, y, init, goal;

vector<int> node_value(100002);
vector<int> node_goal(100002);
vector<int> operated;
vector< vector<int> > graph(100002);

void dfs(int now, int prev, int oe, int eo){
    
    if(oe)
    {
        node_value[now] = 1 - node_value[now];
    }

    if(node_value[now] != node_goal[now])
    {
        oe = 1 - oe;
        operated.push_back(now);
    }

    for(int stk=0; stk < graph[now].size() ; stk++){
        if(graph[now][stk] != prev){
            dfs(graph[now][stk], now, eo, oe);
        }
    }
}

int main()
{
    scanf("%d", &n);
    
    for(int i=1; i<n; i++){
        scanf("%d %d", &x, &y);

        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for(int i=1; i<=n; i++){
        scanf("%d ", &init);
        node_value[i] = init;
    }
    for(int i=1; i<=n; i++){
        scanf("%d ", &goal);
        node_goal[i] = goal;
    }

    dfs(1, 0, 0, 0);

    printf("%d\n", operated.size());
    for(int i=0; i < operated.size(); i++){
        printf("%d\n", operated[i]);
    }

    return 0;
}

/*
교수님 설명 및 문제 해석

노드가 n개인 트리가 있다.
각각의 노드는 초기값 initi를 가진다.
노드1번이 root노드이다.

노드하나를 골라서 노드에 있는 값이 뒤집힌다(0->1, 1->0)
아들노드는 그대로 있고, 손자노드는 뒤집는다. (아래로 가면서 반복)

전부 목표값(goali)으로 바꾸려면 오퍼레이션을 몇번해야 하는가?


자기 직계 조상노드중
홀수층에서 일어난 oper 횟수와
짝수층에서 일어난 oper 횟수를 알고있어야 한다.

트리를 만들지 않고 dfs로 풀어도 해결된다.
(짝, 홀, 층수, init, goal, operation)
*/