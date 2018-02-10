#include <stdio.h>

int main(void){

    // 캡스락이 실수로 눌린 경우
    // 1. 오직 대문자만 가지고 있을 때
    // 2. 첫글자만 빼고 모두 대문자일 때

    // 아스키코드
    // 대문자 A 65 ~ Z 90
    // 소문자 a 97 ~ z 122

    #define ASC_CHNG 32

    char input[100];

    scanf("%s", input);
    
    if(input[1] == '\0'){
        if(input[0]<=90){
            input[0] = input[0] + ASC_CHNG;
        }
        else{
            input[0] = input[0] - ASC_CHNG;
        }
    }
    else{
        for(int i=1; input[i] != '\0'; i++){
            if(input[i] >=97){
                printf("%s", input);
                return 0;
            }
        }
        for(int i=0; input[i] != '\0'; i++){
            if(input[i]<=90){
                input[i] = input[i] + ASC_CHNG;
            }
            else{
                input[i] = input[i] - ASC_CHNG;
            }
        }
    }

   

    printf("%s", input);

    return 0;
}
