#include <stdio.h>

int main()
{
    int x;
    int bact=0;
    scanf("%d", &x);

    while(x>0){
        bact += x%2;
        x = x/2;
    }
    printf("%d", bact);

    return 0;
}
