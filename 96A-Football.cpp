#include <stdio.h>
#include <string.h>

int main(void){

    char player[100];

    scanf("%s", player);

    if(strstr(player, "1111111") != 0 || strstr(player, "0000000") != 0)
    {       //7 이상의 연속된 수열이 있을경우
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}
