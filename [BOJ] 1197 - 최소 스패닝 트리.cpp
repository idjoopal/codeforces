#include <bits/stdc++.h>
using namespace std;

int v, k, e;
int i, j, t, start, end, cnt;
int input[200010][3], arr[50010];
long long answer;

int compare(const void *a, const void *b){
    if(*((int*)a+2) == *((int*)b +2)){
        if(*(int*)a == *((int*)b)){
            if(*((int*)a+1)==*((int*)b+1)){
                return 1;
            }
            else if(*((int*)a+1) == *((int*)b+1)){
                return -1;
            }
            else {
                return 0;
            }
        }
        else if(*(int*)a < *(int*)b){
            return 1;
        }
        else{
            return -1;
        }
    }
    if(*((int*)a+2) > *((int*)b + 2)){
        return 1;
    }
    else{
        return -1;
    }
}

int find(int n){
    //트리의 root을 검색
    if(arr[n] == n){
        return n;
    }
    arr[n] = find(arr[n]);
    return arr[n];
}

int unioned(int a, int b){
    a = find(a);
    b = find(b);
    if(a==b){
        return 0;
    }
    arr[b] = a;
    return 1;
}

int main(void){

    answer =0;
    scanf("%d %d", &v, &e);

    for(int i=0; i<e; i++){
        scanf("%d %d %d", &input[i][0], &input[i][1], &input[i][2]);
    }

    for(i=1; i<=v; i++){
        arr[i] = i;
    }

    qsort(input, e, sizeof(int)*3, compare);

    for(i=0; i<e; i++){
        if(unioned(input[i][0], input[i][1]) == 1){
            answer += input[i][2];
        }
    }

    printf("%lld", answer);

    return 0;
}