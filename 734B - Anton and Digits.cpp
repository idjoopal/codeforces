#include <stdio.h>
#include <malloc.h>

int small(int a, int b, int c){
    if(a<=b && a<=c){
        return a;
    }
    else if(b<=a && b<=c){
        return b;
    }
    else{
        return c;
    }
}

int main()
{
    int k2, k3, k5, k6;
    int cnt_256=0;
    scanf("%d %d %d %d", &k2, &k3, &k5, &k6);
    cnt_256 = small(k2, k5, k6);

    printf("%d", 256*cnt_256 + 32*small(k2-cnt_256, k3, k3));

    return 0;
}