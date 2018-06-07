#include <stdio.h>

int main()
{
    int n, m, c;
    int win_mis=0;
    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &m, &c);
        if(m>c){
            win_mis++;
        }
        else if(m<c){
            win_mis--;
        }
    }

    if(win_mis > 0){
        printf("Mishka");
    }
    else if(win_mis < 0){
        printf("Chris");
    }
    else{
        printf("Friendship is magic!^^");
    }
    return 0;
}