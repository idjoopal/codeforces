#include <stdio.h>
#include <math.h>

int chk_lucky(int n){
    
    if(n != 4 && n != 7)
    {
        return 0;
    }
    return 1;
}
int chk_lucky_digit(__int64 n){
    __int64 cipher=pow(10.0, 18.0);
    int cnt=0;
    for(; n/cipher == 0; cipher /= 10){}
    
    for(; cipher != 0; cipher /=10)
    {
        if(n/cipher == 4 || n/cipher == 7)
        {
            cnt++;
        }
        n = n%cipher;
    }
    
    return cnt;
}

int main(void){

    __int64 n;

    scanf("%I64d", &n);

    if(chk_lucky(chk_lucky_digit(n))){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}
