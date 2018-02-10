#include <stdio.h>

int main(void){
    
    char input[100];

    scanf("%s", input);

    for(int i=0; input[i]!='\0'; i++){
        if(input[i] == 'H' || input[i] == 'Q' || input[i] == '9')
        {
            printf("YES");
            return 0;
        }
    }
    printf("NO");
    return 0;
}
