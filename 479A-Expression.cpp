#include <stdio.h>

int max(int n, int m){
    if(n>=m) return n;
    if(n<m) return m;
}

int main(void){
    int a,b,c;
    int result=0;

    scanf("%d\n%d\n%d", &a, &b, &c);

    result = max(result, a+b+c);
    result = max(result, a*b*c);
    result = max(result, (a+b)*c);
    result = max(result, a+b*c);
    result = max(result, a*b+c);
    result = max(result, a*(b+c));

    printf("%d", result);

    return 0;
}
