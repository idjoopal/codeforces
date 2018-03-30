#include <stdio.h>
#include <malloc.h>

int main()
{
    int n;
    int *a;
    int *b;
    int *c;

    scanf("%d", &n);

    a = (int*)malloc(n*sizeof(int));
    b = (int*)malloc(n*sizeof(int));
    c = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n; i++){
        scanf("%d %d", &a[i], &b[i]);

        if(a[i] == 0){
            c[1] == b[i];
        }
    }


    return 0;
}
