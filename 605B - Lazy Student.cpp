#include <bits/stdc++.h>
using namespace std;

typedef struct edge{
    int node1;
    int node2;
    
} Edge;


int n, m, x, y, ans=0;
int* energy;
vector< vector<int> > graph(100001);
//2차원 벡터

int main(){
    scanf("%d %d", &n, &m);

    for(int i=0; i<m; i++){
        scanf("%d %d", &)
    }
    return 0;
}

/*
    들어가지 않는 edge는 다른 cycle을 이루는 edge들보다 반드시 크다.

    input을 sorting해서
    O인 edge를 한줄로 길게 이어놓고, 안되는 edge를 붙일수있는 노드를 찾아서 붙인다.
*/