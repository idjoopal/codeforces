#include <bits/stdc++.h>
#include <vector>

using namespace std;

typedef struct node{
    int dest_house;
    int diameter;
} Node;

int main()
{
    int n, p;
    int a, b, d;
    int pair=0;
    int dest_idx=0;
    int small_dia=1000001;

    scanf("%d %d", &n, &p);

    vector<int> tohouse(n+1);
    vector<int> fromhouse(n+1);
    vector<Node> pipe(n+1);

    for(int i=0; i<p; i++){
        scanf("%d %d %d", &a, &b, &d);
        
        pipe[a].dest_house = b;
        pipe[a].diameter = d;

        fromhouse[a]++;
        tohouse[b]++;
    }

    for(int i=1; i<=n; i++){
        if(tohouse[i] == 0 && fromhouse[i] > 0){
            pair++;
        }
    }
    printf("%d\n", pair);

    for(int i=1; i<=n; i++){
        if(tohouse[i] == 0 && fromhouse[i] > 0){
            printf("%d ", i);
            dest_idx = pipe[i].dest_house;
            small_dia = pipe[i].diameter;
            while(fromhouse[dest_idx] != 0){
                small_dia = min(small_dia, pipe[dest_idx].diameter);
                dest_idx = pipe[dest_idx].dest_house;
            }
            printf("%d %d\n", dest_idx, small_dia);
        }
    }

    return 0;
}

/* 교수님의 해석 및 설명
 들어오는건 없고 나가는 것만 있을때, 물탱크를 둔다.
 파이프가 터지면 안되므로 물의 양을 최소 지름에 맞춘다.

 문제 논리만 따지면, 순환하는 파이프 노선도 존재 할 수 있다.
 그리고 그 어느 집과도 파이프로 연결되지 않은 집도 존재 할 수 있다.
 여기서는 그 두가지 경우를 무시하고 풀었다.

 iff ==> if and only if (필요충분조건)
*/