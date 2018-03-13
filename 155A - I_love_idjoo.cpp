#include <stdio.h>
#include <malloc.h>

int main(void){
    int n;
    int min, max, amazing=0;
    int *a;

    scanf("%d", &n);

    a = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
        if(i==0){
            min = a[i];
            max = a[i];
        }else{
            if(a[i]<min){
                min = a[i];
                amazing++;
            }
            else if(a[i]>max){
                max = a[i];
                amazing++;
            }
        }
    }
    printf("%d", amazing);
    return 0;
}