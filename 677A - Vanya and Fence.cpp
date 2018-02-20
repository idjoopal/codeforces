#include <stdio.h>
#include <malloc.h>

int main(void){
    int n, h;
    int *a;
    int width=0;

    scanf("%d %d", &n, &h);

    a = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
        width++;
        if(a[i]>h){
            width++;
        }
    }
    printf("%d", width);
    return 0;
}