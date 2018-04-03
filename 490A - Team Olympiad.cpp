#include <stdio.h>

int small(int a, int b)
{
    if(a<b){
        return a;
    }else{
        return b;
    }
}
int main()
{
    int n, input;
    int cnt1=0, cnt2=0, cnt3=0;
    int g1[5000];
    int g2[5000];
    int g3[5000];

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d ", &input);

        switch(input){
            case 1:
                g1[cnt1] = i+1;
                cnt1++;
                break;
            case 2:
                g2[cnt2] = i+1;
                cnt2++;
                break;
            case 3:
                g3[cnt3] = i+1;
                cnt3++;
                break;
        }
    }
    printf("%d\n", small(cnt1,small(cnt2,cnt3)));

    for(int j=0; j < small(cnt1,small(cnt2,cnt3)); j++){
        printf("%d %d %d\n", g1[j], g2[j], g3[j]);
    }
    return 0;
}
