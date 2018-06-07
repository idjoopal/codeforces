#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k;

    scanf("%d %d", &n, &k);
    vector<int> s(n);

    for(int i=0; i<n; i++){
        scanf("%d ", &s[i]);
    }
    return 0;
}

/* 
    교수님의 해석 및 설명

    종이 9개이고 6박스에 넣어야 한다면,
    가장 큰 종 3개를 한개씩 넣고
    나머지 종 6개를 16/25/34 번째를 같이 묶어 넣으면 가장 최적이다.

    이 때, 가장 큰 박스 크기를 구하면 된다.
*/