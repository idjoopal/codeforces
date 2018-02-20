#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void * first, const void * second) 
{ 
    if (*(char*)first > *(char *)second) 
        return 1; 
    else if (*(char*)first < *(char *)second) 
        return -1; 
    else 
        return 0; 
}

int main(void){
    char f[100];
    char s[100];
    char t[100];

    scanf("%s", f);
    scanf("%s", s);
    scanf("%s", t);

    if(strlen(f)+strlen(s) != strlen(t)){
        printf("NO");
        return 0;
    }
    
    strcat(f, s);
    
    qsort((char*)f, strlen(f), sizeof(char), compare);
    qsort((char*)t, strlen(t), sizeof(char), compare);
    
    if(strcmp(f, t)==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}