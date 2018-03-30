#include <stdio.h>

int main()
{
    int a, b;
    int day=0;

    scanf("%d %d", &a, &b);
    
    for(day=0; a <= b ;day++){
        a = a*3;
        b = b*2;
    }
    printf("%d", day);
    return 0;
}