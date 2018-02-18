#include <stdio.h>
#include <ctype.h>

int main(void){
    char s[100];
    int lower=0, upper=0;

    scanf("%s", s);

    for(int i=0; s[i] != '\0'; i++){
        if(islower(s[i]) != 0){
            lower++;
        }else{
            upper++;
        }
    }

    if(lower >= upper){
        for(int i=0; s[i] != '\0'; i++){
            s[i]=tolower(s[i]);
            printf("%c", s[i]);
        }
    }
    else{
        for(int i=0; s[i] != '\0'; i++){
            s[i]=toupper(s[i]);
            printf("%c", s[i]);
        }
    }
    return 0;
}