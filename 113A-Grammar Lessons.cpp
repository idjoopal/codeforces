#include <stdio.h>
#include <string.h>

//        남성   /  여성
// 형용사 lios   /  liala
// 명사   etr    /  etra
// 동사   initis /  inites
// ??형용사 + 1명사 + ??동사 (동사가 여러개 있으면 안된다.)
// 항상 같은 gender를 가짐

// 1. 단어인지 문장인지 판단한다.
// 2. 어미가 전부 Petya언어에 맞는지 확인한다.
// 3. 문장이라면 명사가 정확히 1개인지 확인한다.
// 4. 형용사와 동사가 제대로된 위치에 있는지 확인한다.
// 5. 모든 어미의 gender가 맞는지 확인한다.

int main(void){
    char str[100000];
    int chk_len;
    int male = 0, female = 0;
    int adj = 0;
    int noun = 0;
    int verb = 0;
    
    int OK = 1;

    while( scanf("%s", str) != EOF )    //문장이 끝날 때 까지 계속 단어를 한개씩 받아옴
    {
        chk_len = strlen(str);          //단어의 길이

        if(chk_len >= 4 && !strcmp(str+chk_len-4, "lios") )     // 남성 형용사
        {
            if( noun || verb ){     //  이미 명사나 동사가 존재
                printf("NO"); return 0;
            }
            adj++, male++;
        }
        else if( chk_len >= 5 && !strcmp(str+chk_len-5, "liala") )  // 여성 형용사
        {
            if( noun || verb ){     //  이미 명사나 동사가 존재
                printf("NO"); return 0;
            }
            adj++, female++;
        }

        else if( chk_len >= 3 && !strcmp(str+chk_len-3, "etr") )    // 남성 명사
        {
            if( verb ){     //  이미 동사가 존재
                printf("NO"); return 0;
            }
            noun++, male++;
        }
        else if( chk_len >= 4 && !strcmp(str+chk_len-4, "etra") )   // 여성 명사
        {
            if( verb ){     //  이미 동사가 존재
                printf("NO"); return 0;
            }
            noun++, female++;
        }

        else if( chk_len >= 6 && !strcmp(str+chk_len-6, "initis") ) // 남성 동사
        {
            verb++, male++;
        }
        else if( chk_len >= 6 && !strcmp(str+chk_len-6, "inites") ) // 여성 동사
        {
            verb++, female++;
        }

        else{ printf("NO"); return 0; }   //Petya어가 아님
    }
    
    if( adj+noun+verb == 1 ){  //단어면
        printf("YES");
    }
    else
    {
        if( noun != 1 || male && female ){  //문장인데 명사가 1개가 아니거나 혼성 문장일때
            printf("NO"); return 0;
        }
        printf("YES");
    }

    return 0;
}
