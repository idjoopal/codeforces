#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

int n,m;
int *a, *b;

typedef struct Dancing_skill{
    int index;
    int skill;
    int linked_01;
    int linked_02;
    int num;
}DANCE;

int compare_ints(const void* a, const void* b)
{
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;
 
    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
 
    // return (arg1 > arg2) - (arg1 < arg2); // possible shortcut
    // return arg1 - arg2; // erroneous shortcut (fails if INT_MIN is present)
}

int main()
{
    scanf("%d", &n);
    a = (int*)malloc(n*sizeof(int));
    for(int i=0; i<n; i++){
        scanf("%d ", &a[i]);
    }
    qsort(a, sizeof a / sizeof *a, sizeof(int), compare);
    

    scanf("%d", &m);
    b = (int*)malloc(m*sizeof(int));
    for(int j=0; j<m; j++){
        scanf("%d ", &b[j]);
    }
    qsort(b, sizeof b / sizeof *b, sizeof(int), compare);

    return 0;
}