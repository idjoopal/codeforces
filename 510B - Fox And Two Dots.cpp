#include <stdio.h>
#include <string.h>
#include <malloc.h>

int dfs(){

}
int main()
{
    int n, m;
    char** input;
    scanf("%d %d", &n, &m);

    input = (int**)malloc((n+1)*sizeof(int*));

    for(int i=0; i<n; i++){
        input[i] = (int*)malloc((m+1)*sizeof(int));
    }

    for(int i=0; i<n; i++){
        scanf("%s", input[i]);
    }


    return 0;
}
