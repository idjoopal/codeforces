#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int compare(const void * first, const void * second) 
{ 
    if (*(char*)first > *(char *)second) 
        return 1; 
    else if (*(char*)first < *(char *)second) 
        return -1; 
    else 
        return 0; 
}

int main(void){
    int a[3];
    int sum=0;

    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    qsort((int*)a, 3, sizeof(int), compare);

    sum += abs(a[2]-a[1])+abs(a[0]-a[1]);

    printf("%d", sum);
    return 0;
}
