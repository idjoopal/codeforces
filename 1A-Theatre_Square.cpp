#include <stdio.h>

int main(void){

    __int64 m;
    __int64 n;
    __int64 a;

    scanf("%I64d %I64d %I64d", &n, &m, &a);

    if(n%a != 0){
       if(m%a != 0){
           printf("%I64d",(n/a+1)*(m/a+1));
       }  
       else{
           printf("%I64d",(n/a+1)*(m/a));
       } 
    }
    else{
        if(m%a != 0){
           printf("%I64d",(n/a)*(m/a+1));
       }  
       else{
           printf("%I64d",(n/a)*(m/a));
       } 
    }

   
    return 0;
}
