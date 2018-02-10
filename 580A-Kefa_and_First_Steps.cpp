#include <stdio.h>
#include <malloc.h>

int main(void){
    
    int n;
    int* a;
    int max=1;
    int set=1;

    scanf("%d", &n);
    a = (int*)malloc(n*sizeof(int)); // 할당

    for(int i=0;i<n;i++){
        scanf("%d ", &a[i]);

        if(i!=0 && a[i-1]<=a[i]){
            set++;
            if(set>max){ max = set; }
        }
        else{
            set = 1;
        }
    }
    printf("%d", max);
    return 0;
}
