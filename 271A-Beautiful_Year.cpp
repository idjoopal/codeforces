#include <stdio.h>

int chk_year(int year){
    int num[10]={0, };
    int sum=0;
    num[year/1000] = 1;
    num[year/100%10] = 1;
    num[year/10%10] = 1;
    num[year%10] = 1;
    for(int i=0;i<=9;i++){
        sum += num[i];
    }
    if(sum == 4){
        printf("%d", year); return 1;
    }
    return 0;
}
int main(void){
    int y=0;

    scanf("%d", &y);

    for(int j=y+1;j<=10000;j++){
        if(chk_year(j)){
            return 0;
        }
    }
    return 0;
}
