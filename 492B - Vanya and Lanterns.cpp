#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int compare(const void * first, const void * second) 
{ 
    if (*(__int64*)first > *(__int64 *)second) 
        return 1; 
    else if (*(__int64*)first < *(__int64 *)second) 
        return -1; 
    else 
        return 0; 
}

int main(void){
    int n;
    double distance = 0;
    __int64 l;
    __int64 *a;
    int is_start=0, is_end=0;


    scanf("%d %I64d", &n, &l);
    a= (__int64*)malloc((n)*sizeof(__int64));

    for(int i=0; i<n; i++){
        scanf("%I64d ", &a[i]);
        if(a[i] == 0){ is_start++; }
        if(a[i] == l){ is_end++; }
    }

    qsort((__int64*)a, n, sizeof(__int64), compare);

    for(int i=1; i<n; i++){
        if(distance < a[i]-a[i-1] ){
            distance = a[i]-a[i-1];
        } 
    }
    if(!is_start && distance/2 < a[0]){
        distance = 2*a[0];
    }
    if(!is_end && distance/2 < l-a[n-1]){
        distance = 2*(l-a[n-1]);
    }

    printf("%.10f", distance/2);
    return 0;
}
