#include <stdio.h>
#include <ctype.h>
#include <malloc.h>

int main(void){
    int n;
    int alphabet[26] = {0, };
    char *a;

    scanf("%d", &n);
    a = (char*)malloc(n*sizeof(char));

    scanf("%s", a);
    for(int i=0; a[i] != '\0'; i++){
        a[i] = tolower(a[i]);
        alphabet[a[i]-97] = 1;
    }

    for(int i=0; i<26; i++){
        if(alphabet[i] == 0){
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}