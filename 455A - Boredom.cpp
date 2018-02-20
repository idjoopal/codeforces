#include <stdio.h>

__int64 max(__int64 a, __int64 b){
    if(a >= b){ return a; }
    else{ return b; }
}

int main(void){
    __int64 n;
    __int64 elemt;
    __int64 count[100001] = {0, };
    __int64 expected[100001] = {0, };

    scanf("%I64d", &n);

    //숫자가 몇번 나왔는지 체크
    for(__int64 i=0; i < n; i++){
        scanf("%I64d ", &elemt);
        count[elemt]++; 
    }

/*  1~i 까지 나올 수 있는 기대값
    expected[0] = count[0];
    
    expected[1] = count[1];
    expected[2] = 2*count[2] or count[1];
    expected[3] = 3*count[3]+count[1] or expected[2];
    expected[4] = 4*count[4]+expected[2] or expected[3];
    expected[i] = i*count[i]+expected[i-2] or expected[i-1] 
*/
    expected[0] = 0;
    expected[1] = count[1];

    for(__int64 i=2; i <= 100000; i++){
        expected[i] = max(i*count[i] + expected[i-2], expected[i-1]);
    }

    printf("%I64d", expected[100000]);
    return 0;
}
