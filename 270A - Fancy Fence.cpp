#include <stdio.h>
#include <malloc.h>

int main()
{
    int t, a, i;
    float j;
    int reg_pol[181]={0, };
    int rev_pol[181]={0, };

    scanf("%d", &t);

    for(int x=0; x<t; x++){
        scanf("%d", &a);

        for(i=3;i<=360;i++){
            j=((i-2.0)*180)/i;

            if(j==(float)a){
                printf("YES\n");
                break;
            }
            if(j>(float)a){
                printf("NO\n");
                break;
            }
        }
    }
    return 0;
}