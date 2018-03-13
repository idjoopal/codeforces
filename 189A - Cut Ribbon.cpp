#include <stdio.h>

int main(void){
    int n, a, b, c;
    int z, max = 0;
    scanf("%d %d %d %d", &n, &a, &b, &c);

    for(int x=0; x<= n/a; x++){
        for(int y=0; y<= (n-a*x)/b; y++){
            if((n - (a*x + b*y))%c == 0){
                z = (n - (a*x + b*y))/c;
                if(max < x+y+z){
                    max = x+y+z;
                }
            }
        }
    }

    printf("%d", max);
    return 0;
}
