#include <stdio.h>
#include <malloc.h>
#include <string.h>

int main()
{
    int n;
    int isyes=0;
    int isOO=0;
    int row, col;
    char **a;
    scanf("%d", &n);

    a = (char**)malloc(n*sizeof(char*));
    for(int i=0; i<n; i++){
        a[i] = (char*)malloc(6*sizeof(char));
        scanf("%s", a[i]);

        if(strstr(a[i], "OO")!=0)
        {
            row = i;
            col = strstr(a[i], "OO") - a[i];
            isyes = 1;
        }
    }

    if(isyes){
        printf("YES\n");
        for(int i=0; i<n; i++){
            for(int j=0; j<5; j++){
                if(row == i && col == j){
                    printf("++"); j++;
                }
                else{
                    printf("%c", a[i][j]);
                }
            }
            printf("\n");
        }
    }
    else{
        printf("NO");
    }
    return 0;
}