#include <stdio.h>

int main()
{
    int n;
    int c;
    int officer=0;
    int untreated=0;

    scanf("%d", &n);
    
    for(int i=0; i<n; i++){
        scanf("%d ", &c);
        if(officer+c >= 0){
            officer += c;
        }else{
            untreated -= c;
        }
    }
    printf("%d", untreated);
    return 0;
}