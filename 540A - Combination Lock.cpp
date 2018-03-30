#include <stdio.h>
#include <math.h>
#include <malloc.h>

int main()
{
    int n;
    char* a;
    char* b;
    int times=0;

    scanf("%d", &n);
    a = (char*)malloc((n+1)*sizeof(char));
    b = (char*)malloc((n+1)*sizeof(char));
    
    scanf("%s", a);
    scanf("%s", b);

    for(int i=0; i<n; i++){
        if(abs(a[i]-b[i]) > 5){
            times += 10- (abs(a[i]- b[i]));
        }else{
            times += abs(a[i]- b[i]);
        }
    }
    printf("%d", times);
    return 0;
}