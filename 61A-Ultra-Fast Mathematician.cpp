#include <stdio.h>

int main(void){
    char m[100];
    char n[100];
    char prev;

    scanf("%s", m);
    scanf("%s", n);

    for(int i=0; n[i] != '\0'; i++){
        if(m[i] == n[i]){
            printf("0");
        }else{
            printf("1");
        }
    }
    return 0;
}