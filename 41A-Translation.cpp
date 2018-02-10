#include <stdio.h>

int main(void){
    char s[100]={0,};
    char t[100]={0,};
    int length=0;

    scanf("%s", &s);

    while(s[length] !='\0')
    {
        length++;
    }

    scanf("%s", &t);

    for(int i=0;i<length;i++){
        if(s[i] != t[length-1-i]){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}
