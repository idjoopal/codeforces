#include <stdio.h>

int main(void){

    int n;
    char str[100][101];

    scanf("%d", &n);
    for(int i=0;i<n;i++){
        scanf("%s", str[i]);
    }

    for(int i=0;i<n;i++){
        for(int j=0; j<101; j++)
        {
            if(str[i][j] == '\0'){ //단어의 끝에 당도했을 때,
                if(j < 11){ //단어가 10글자 이하면
                    printf("%s\n", str[i]);
                    break;
                }
                else{
                    printf("%c%d%c\n", str[i][0], j-2, str[i][j-1]);
                    break;
                }
             }
         }
    }
    return 0;
}
