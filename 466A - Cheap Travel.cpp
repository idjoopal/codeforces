#include <stdio.h>

int main(void){
    int n, m, a, b;
    int o_ride, m_ride;
    int min_sum = 10000000;
    scanf("%d %d %d %d", &n, &m, &a, &b);

    for(m_ride=0; m*m_ride<n+m; m_ride++){
        o_ride = n-m*m_ride;
        if(o_ride<0){
            o_ride = 0;
        }
        
        if(min_sum > a*o_ride + b*m_ride){
            min_sum = a*o_ride + b*m_ride;
        }
    }
    printf("%d", min_sum);
    return 0;
}
