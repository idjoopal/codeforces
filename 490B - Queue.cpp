#include <stdio.h>
#include <bits/stdc++.h>
#include <malloc.h>
using namespace std;

int main()
{
    int n;
    int a, b;

    int isodd = 1;
    int odd_key, even_key;

    map <int, int> m;

    map <int, int> front_idx;
    map <int, int> find_first;

    scanf("%d", &n);
    for(int i=0;i<n; i++){
        scanf("%d %d", &a, &b);
        m[a] = b;
        front_idx[i] = a;
        find_first[b]++;
    }

    for(int i=0;i<n; i++){
        if(find_first[front_idx[i]] == 0){
            printf("%d ", front_idx[i]);
            odd_key = front_idx[i];
            break;
        }
    }
    even_key = m[0];
    printf("%d ", m[0]);

    while(1){
        if(isodd){
            if(m[odd_key] == 0){
                return 0;
            }
            printf("%d ",m[odd_key]);
            odd_key = m[odd_key];
            isodd = 0;


        }else{
            if(m[even_key] == 0){
                return 0;
            }
            printf("%d ",m[even_key]);
            even_key = m[even_key];
            isodd = 1;
        }
    }
    return 0;
}
