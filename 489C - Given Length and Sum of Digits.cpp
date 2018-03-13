#include <stdio.h>

int m, s;
int stack_0 = 0;
int stack_9 = 0;
int remain = 0;

int main()
{
    scanf("%d %d", &m, &s);

    if(m==1){
        if(s > 9){
            printf("-1 -1"); return 0;
        }

        printf("%d %d", s, s);
    }
    else{
        if(s==0 || s > 9*m){
            printf("-1 -1"); return 0;
        }
        else{
            remain = s;
            for(int i=1; i<m; i++){
                if(remain > 9){
                    remain -= 9;
                    stack_9++;
                }
            }
            stack_0 = m - stack_9 - 1;

            //우선 작은숫자 출력
            if(remain>1 && stack_0>0){
                printf("1");
                stack_0--;
                remain--;
                for(int z=0; z<stack_0; z++){
                    printf("0");
                }
                printf("%d", remain);
                for(int e=0; e<stack_9; e++){
                    printf("9");
                }
                printf(" ");

                stack_0++;
                remain++;
            }
            else{
                printf("%d", remain);
                for(int z=0; z<stack_0; z++){
                    printf("0");
                }
                for(int e=0; e<stack_9; e++){
                    printf("9");
                }
                printf(" ");
            }
            

            //두번째는 큰 숫자 출력
            for(int e=0; e<stack_9; e++){
                printf("9");
            }
            printf("%d", remain);
            for(int z=0; z<stack_0; z++){
                printf("0");
            }
            
        }
    }

    return 0;
}