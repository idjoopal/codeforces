#include <bits/stdc++.h>
#include <map>

using namespace std;
int main()
{
   int n;
   string s;
   cin>>n;
   map <string, int> m;

   while(n--)
   {
      cin>>s;
      m[s]++;
      if(m[s]==1)
      cout<<"OK"<<endl;
      else
      cout<<s<<m[s]-1<<endl;
   }
   return 0;
}