#include <stdio.h>

int main(void){

    // 아스키코드
    // 대문자 A 65 ~ Z 90
    // 소문자 a 97 ~ z 122
    // 첫 글자가 소문자를 대문자로 바꿔준다

    #define ASC_CHNG 32

    char input[1000];

    scanf("%s", input);

    if(input[0] >= 97){
        input[0] = input[0] - ASC_CHNG;
    }

    printf("%s", input);

    return 0;
}
