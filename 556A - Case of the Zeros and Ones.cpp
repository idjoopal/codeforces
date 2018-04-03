#include <stdio.h>
#include <math.h>

int main() {
    int n;
    int cnt=0;
    char s;

    scanf("%d", &n);

    for(int i=0; i<=n; i++){
        scanf("%c", &s);
        if(s == '1'){
            cnt++;
        }
        else if(s == '0')
        {
            cnt--;
        }
    }
    printf("%d", abs(cnt));

    return 0;
}