#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> v;

int main(void) {
    int t, cnt = 1;
    scanf("%d", &t);
    while (t--) {
        int n, tmp;
        scanf("%d", &n);
        string line[n];
        v.resize(n);

        for (int i = 0; i < n; i++) {
            line[i] = "";
        }

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                scanf(" %d", &tmp);
                v[i].push_back(tmp);
            }
        }

        //90도 회전하면서 string 저장
        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                line[i] += to_string(v[j][i]);
            }
        }

        for (int i = 0; i < n; i++) {
            line[i] += " ";
        }

        //180도 회전하면서 string 저장
        for (int i = n - 1; i >= 0; i--) {
            for (int j = n - 1; j >= 0; j--) {
                line[i] += to_string(v[n - i - 1][j]);
            }
        }

        for (int i = 0; i < n; i++) {
            line[i] += " ";
        }

        //270도 회전하면서 string 저장
        for (int i = n - 1; i >= 0; i--) {
            for (int j = 0; j < n; j++) {
                line[i] += to_string(v[j][n - i - 1]);
            }
        }

        printf("#%d\n", cnt++);
        for (int k = 0; k < n; ++k) {
            cout << line[k] << "\n";
        }
        v.clear();
    }
    return 0;
}