#include <stdio.h>
#include <string.h>

int main(void){
    char letter[1000];
    char *token;
    int count[26]={0, };
    int sum=0;

    scanf("%[^\n]s", letter);

    token = strtok(letter, " {,}");

    while(token != NULL){
        if(count[token[0]-97] == 0){
            count[token[0]-97] = 1;
            sum++;
        }
        token = strtok(NULL, " {,}");
    }
    printf("%d", sum);
    return 0;
}
