#include <stdio.h>

int chk_lucky(int n){
    int cipher=1000;
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
    
    return 1;
}

int main(void){

   int n;

   scanf("%d", &n);

   for(int i=1; i<=n; i++){
       if(chk_lucky(i) && n%i == 0){
           printf("YES");
           return 0;
       }
   }
   printf("NO");
   return 0;
}
