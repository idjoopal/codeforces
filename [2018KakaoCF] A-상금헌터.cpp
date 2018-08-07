#include <bits/stdc++.h>


int chk_a(int a){
    int award=0;
    if(a==0){
        award = 0;
    }else if(a==1){
        award = 5000000;
    }else if(2<=a && a<=3){
        award = 3000000;    
    }else if(4<=a && a<=6){
        award = 2000000;
    }else if(7<=a && a<=10){
        award = 500000;
    }else if(11<=a && a<=15){
        award = 300000;
    }else if(16<=a && a<=21){
        award = 100000;
    }
    return award;
}
int chk_b(int a){
    int award=0;
    if(a==0){
        award = 0;
    }else if(a==1){
        award = 5120000;
    }else if(2<=a && a<=3){
        award = 2560000;    
    }else if(4<=a && a<=7){
        award = 1280000;
    }else if(8<=a && a<=15){
        award = 640000;
    }else if(16<=a && a<=31){
        award = 320000;
    }
    return award;
}
int main(void){

    int n;
    int a,b;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", chk_a(a) + chk_b(b));
    }
    return 0;
}