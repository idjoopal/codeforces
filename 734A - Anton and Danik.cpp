#include <stdio.h>
#include <malloc.h>

int main(void){
    int n;
    int AD=0;
    char *s;

    scanf("%d", &n);
    s = (char*)malloc(n*sizeof(char));

    scanf("%s", s);
    for(int i=0; s[i]!='\0'; i++){
        if(s[i] == 'A'){
            AD++;
        }else{
            AD--;
        }
    }

    if(AD>0){
        printf("Anton");
    }else if(AD<0){
        printf("Danik");
    }else{
        printf("Friendship");
    }

    return 0;
}