#include <iostream>
#include <vector>
using namespace std;

/*
 020
 8X4
 010
*/

int n;
char map[51][51] = {0};
int mount[51][51] = {0};

vector<int> dp;

int main() {
	
    scanf("%d", &n);
    
    for(int rows=0; rows<n; rows++){
        for(int cols=0; cols<n; cols++){
            scanf("%c ", &map[rows][cols]);
            if(map[rows][cols]>='1' && map[rows][cols]<='15'){
                int num = map[rows][cols]-'0';
                if(num>=8){
                    num-=8;
                    if(cols+1<n){
                        mount[rows][cols+1] = 1;
                    }
                }
                if(num>=4){
                    num-=4;
                    if(cols-1>=0){
                        mount[rows][cols-1] = 1;
                    }
                }
                if(num>=2){
                    num-=2;
                    if(rows+1<n){
                        mount[rows+1][cols] = 1;
                    }
                }
                if(num>=1){
                    num-=1;
                    if(rows-1>=0){
                        mount[rows-1][cols] = 1;
                    }
                }
            }

        }
    }
	return 0;
}