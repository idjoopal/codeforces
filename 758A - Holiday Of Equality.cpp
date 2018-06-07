#include <stdio.h>
#include <malloc.h>

int main()
{
    int n;
    int max=0;
    int total=0;
    int *a;

    scanf("%d", &n);

    a = (int*)malloc(n*sizeof(int));

    for(int i=0;i<n;i++){
        scanf("%d ", &a[i]);
        if(a[i]>max){
            max = a[i];
        }
    }

    for(int j=0;j<n;j++){
        total += max-a[j];
    }
    printf("%d", total);
    return 0;
}