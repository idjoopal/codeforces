#include <bits/stdc++.h>
using namespace std;

int n, m, x, y, ans=0;
int* energy;
vector< vector<int> > graph(100001);
//2차원 벡터

int main(){

    return 0;
}

/*
    그래프가 주어지고 각각의 에너지값이 주어진다.

    greedy 큰 것부터 빼면 되긴 된다.
    한 edge는 어느 노드를 없애냐에 따라 값이 정해진다.

    원래 풀이 )
    dag direct acyclely graph?
    topological sort 찾아볼 것
    들어가는 것만 찾아서 들어가는게 없는 것을 한개씩 빼다보면
    화살표가 한쪽으로만 가는 그래프가 생성된다.

    결과적으로 큰 것부터 빼기 때문에 greedy로 풀어도 가능해짐
    대학생 올림피아드 수준에서 10문제중 4-5번 수준의 난이도이다.
*/