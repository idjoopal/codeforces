#include <stdio.h>

int main()
{
    int n;
    int a, b, c;

    int total_cost=0;
    int cost=0;
    int from[101] = {0, };
    int to[101] = {0, };

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d %d", &a, &b, &c);
        total_cost += c;

        if(from[a] || to[b]){
            from[b] = 1;
            to[a] = 1;
            cost += c;
        }
        else{
            from[a] = 1;
            to[b] = 1;
        }
    }

    if(total_cost - cost >= cost){
        printf("%d", cost);
    }else{
        printf("%d", total_cost-cost);
    }

    return 0;
}