#include <iostream>
#include <vector>
using namespace std;

int n, c;
int max_day = -1;
int max_cost = 0;
int money = 0;
int now = 0;

vector<int> coin;

int main() {

   scanf("%d", &n);

   for (int i = 0; i < n; i++)
   {
       scanf("%d", &c);
       coin.push_back(c);
   }

   while(true)
   {
      max_cost = 0;
      max_day = -1;

      for (int i = now; i < n; i++)
      {
         if (coin[i] >= max_cost)
         {
            max_cost = coin[i];
            max_day = i;
         }

      }

      if (max_day == -1)
      {
          printf("%d", money);
          return 0;
      }

      if (now < max_day)
      {
         for (now; now < max_day; now++)
         {
            money += (max_cost - coin[now]);
         }
         if (money > 0)
         {
            money--;
         }
      }
      else
      {
         now++;
      }
   }   

   return 0;
}