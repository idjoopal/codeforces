#include <stdio.h>
#include <string.h>

int main()
{
    char s[100001];
    int chk_ab=0, chk_ba=0;
    int now_ab=0;

    char* token_ab;
    char* token_ba;
    char* token_choice;

    scanf("%s", s);

    token_ab = strstr(s, "AB");
    token_ba = strstr(s, "BA");
    if(strlen(token_ab) >= strlen(token_ba)){
        strcpy(token_choice, token_ab);
        now_ab = 1;
    }else{
        strcpy(token_choice, token_ba);
        now_ab = 0;
    }

    while(token_choice != NULL){
        if(now_ab){
            chk_ab = 1;
            if(token_choice[2] == 'A' && token_choice[3] != 'B'){
                printf("NO"); return 0;
            }
        }
        else{
            chk_ab = 0;
            if(token_choice[2] == 'B' && token_choice[3] != 'A'){
                printf("NO"); return 0;
            }
        }

        token_ab = strstr(token_choice+2, "AB");
        token_ba = strstr(token_choice+2, "BA");
        if(token_ab == NULL && token_ba == NULL){
            break;
        }
        
        if(strlen(token_ab) >= strlen(token_ba)){
            strcpy(token_choice, token_ab);
            now_ab = 1;
        }
        else{
            strcpy(token_choice, token_ba);
            now_ab = 0;
        }
    }

    if(chk_ab + chk_ba == 2){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}