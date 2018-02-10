#include <stdio.h>
#include <string.h>

int main(void){
    char dub[200] = {'\0', };
    char* result;
    int space = 0;

    scanf("%s", dub);

    for(int i=0; dub[i] != '\0' ; i++){
        if(dub[i] != 'W' || dub[i+1] != 'U' || dub[i+2] != 'B'){
            printf("%c", dub[i]);
            space = 1;
        }
        else
        {
            if(space){
                printf(" ");
                space = 0;
            }
            i += 2;
        }
    }
    return 0;
}
