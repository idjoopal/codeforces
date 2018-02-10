#include <stdio.h>

int main(void){
    int k, l, m, n, d;
    int cnt=0;

    scanf("%d\n%d\n%d\n%d\n%d", &k, &l, &m, &n, &d);

    for(int i=1; i<=d; i++){
        if(i%k != 0 && i%l != 0 && i%m != 0 && i%n != 0)
        {
            cnt++;
        }
    }
    printf("%d", d-cnt);
    return 0;
}
