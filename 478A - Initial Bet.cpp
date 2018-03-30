#include <stdio.h>

int main()
{
    int c;
    int add=0;

    for(int i=0; i<5; i++){
        scanf("%d ", &c);
        add += c;
    }
    
    if(add % 5 == 0 && add!= 0){
        printf("%d", add/5);
    }else{
        printf("-1");
    }
    return 0;
}