#include <stdio.h>
#include <string.h>

int main()
{
    char dir;
    int corr = 0;
    char input[101];
    char keyboard[3][10]= {
        'q','w','e','r','t','y','u','i','o','p',
        'a','s','d','f','g','h','j','k','l',';',
        'z','x','c','v','b','n','m',',','.','/'
    };
    scanf("%c", &dir);

    if(dir == 'L'){
        corr = 1;
    }else if(dir == 'R'){
        corr = -1;
    }

    scanf("%s", input);

    for(int i=0; i<strlen(input); i++){
        for(int row=0; row<3; row++){
            for(int col=0; col<10; col++){
                if(keyboard[row][col] == input[i]){
                    printf("%c", keyboard[row][col+corr]);
                }
            }
        }
    }

    return 0;
}