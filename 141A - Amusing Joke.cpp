#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare (const void *first, const void *second)
{
    if (*(int*)first > *(int*)second)
        return 1;
    else if (*(int*)first < *(int*)second)
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

    strcat(f, s);

    qsort(f, sizeof(f) / sizeof(char), sizeof(char), compare);
    qsort(t, sizeof(t) / sizeof(char), sizeof(char), compare);

    if(strcmp(f, t)==0){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}