#include <stdio.h>
#include <math.h>

int main(void){
    int n, i, j;
    int in=0;
    int chk;
    scanf("%d", &n);

    for(i=0; n > 5*pow(2,(double)i) ;i++){
        in=1;
        n -= 5*pow(2,(double)i);
    }

    if(in==0){
        chk = n-1;
    }else
    {
        chk = n/pow(2,(double)i);
        if(n % (int)pow(2,(double)i) == 0){
            chk--;
        }
    }
    
    switch(chk){
        case 0:
            printf("Sheldon");
            break;
        case 1:
            printf("Leonard");
            break;
        case 2:
            printf("Penny");
            break;
        case 3:
            printf("Rajesh");
            break;
        case 4:
            printf("Howard");
            break;
    };

    return 0;
}
