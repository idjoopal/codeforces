#include <stdio.h>

int main(void){

    int n;
    int group;

    int taxi=0;
    int member[5] = {0,};
    
    int cur_cnt=0;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d ", &group);
        member[group]++;
    }

    for(; member[4] > 0; member[4]--)
    {
        taxi++;
    }

    for(; member[3] > 0; member[3]--)
    {
        if( member[1] > 0 )
        {
            member[1]--;
        }
        taxi++;
    }

    for(; member[2] > 0; member[2]--)
    {
        if( member[2]-1 > 0 )
        {
            member[2]--;
        }
        else if(member[1] > 0)
        {
            cur_cnt=2;
            while(member[1]>0 && cur_cnt<4){
                member[1]--;
                cur_cnt++;
            }
        }
        taxi++;
    }

    for(; member[1] > 0; member[1]--)
    {
        if(member[1]-1 > 0)
        {
            cur_cnt=1;
            while(member[1]>0 && cur_cnt<4){
                member[1]--;
                cur_cnt++;
            }
        }
        taxi++;
    }

    printf("%d", taxi);
    return 0;
}
