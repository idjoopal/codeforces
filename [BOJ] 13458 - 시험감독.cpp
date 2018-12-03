#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    vector<int> a;
    int ai;
    int b, c;

    scanf("%d", &n);

    for(int i=0; i<n; i++){
        scanf("%d ", &ai);
        a.push_back(ai);
    }
    scanf("%d %d", &b, &c);

    long long int ans = 0;
    
    for(int i=0; i<n; i++){
        //총감독관을 한명 놓고 계산한다.
       a[i]-=b;
       ans++;
       if(a[i]>0){
           ans+=a[i]/c;
           if(a[i]%c!=0){
               ans++;
           }
       }
    }

    cout << ans;

    return 0;
}