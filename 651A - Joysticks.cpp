#include <stdio.h>

int main()
{
    int a, b;
    int times = 0;
    scanf("%d %d", &a, &b);

    while(a != 0 && b != 0){
        if(a==1 && b==1){break;}
        if(a<=b){
            a++;
            b -= 2;
        }else{
            a -= 2;
            b++;
        }
        times++;
    }
    printf("%d", times);
    return 0;
}