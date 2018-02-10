#include <stdio.h>

int main(void){

    // 아스키코드
    // 대문자 A 65 ~ Z 90
    // 소문자 a 97 ~ z 122
    // a:97 e:101 i:105 o:111 u:117 y:121
    // 소문자를 대문자로 바꿔준다
    // 모음이면 아스키코드를 골라 제거한다.
    // 자음이면 새로운 문자열에 .을 추가한뒤 다음에 추가한다.

    #define ASC_CHNG 32
    
    char in_str[101];
    char out_str[202];
    int end=0;

    scanf("%s", in_str);

    for(int i=0; in_str[i] != '\0'; i++){
        if(in_str[i] < 97)
        {
            in_str[i] = in_str[i] + ASC_CHNG;
        }
            
        if(in_str[i] != 97 && in_str[i] != 101 && in_str[i] !=105 && in_str[i] != 111 && in_str[i] != 117 && in_str[i] != 121)
        {
            out_str[end] = '.';
            out_str[end+1] = in_str[i];
            end = end+2;
        }
    }
    out_str[end] = '\0';
    
    for(int i=0; out_str[i] != '\0'; i++){
        printf("%c", out_str[i]);
    }
    return 0;
}
