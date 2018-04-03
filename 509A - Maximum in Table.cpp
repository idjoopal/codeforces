#include <iostream>

using namespace std;

int main() {
    int n, m;
    int table[11][11]={0, };

    cin >> n;
    
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if(i==0 || j==0){
                table[i][j] = 0;
            }
            else if(i==1 || j==1){
                table[i][j] = 1;
            }
            else{
                table[i][j] = table[i-1][j] + table[i][j-1];
            }
        }
    }
    
    cout << table[n][n];
    return 0;
}