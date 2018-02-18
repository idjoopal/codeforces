#include <stdio.h>
#include <malloc.h>

int main(void){
    int n, odd, even;
    int c_odd=0, c_even=0;
    int *a;
    scanf("%d", &n);

    a = (int*)malloc(n*sizeof(int));

    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);

        if(a[i]%2){
            c_odd++;
            odd = i+1;
        }else{
            c_even++;
            even = i+1;
        }
    }

    if(c_odd == 1){
        printf("%d", odd);
    }else{
        printf("%d", even);
    }

    return 0;
}
