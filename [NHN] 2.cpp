#include <iostream>
#include <vector>
#include <string>
#include <queue>

using namespace std;

int main() {
   vector<vector<string>> map;
   vector<vector<string>> ans;
   vector<string> maps;

   int N, W;
   int now_w;
   int min = 0;

   cin >> N >> W;
   
   string name;

   for (int i = 0; i < N; i++)
   {
      for (int j = 0; j < N; j++)
      {
         cin >> name;
         maps.push_back(name);
      }
      map.push_back(maps);
      maps.clear();
   }
   
   ans = map;
   int dir = 0;

   queue<string> name_q;

   N = N - 1;
   
   int to;

   while (N - min > 0)
   {
      int x = min;
      int y = min;
      if (W > 0)
      {
         if (N == 1)
         {
            now_w = 1;
         }
         else
         {
            now_w = W % ((N * 4) - 4);
         }
         if (dir == 0)
         {
            dir = 1;
         }
      }
      else
      {
         if (N == 1)
         {
            now_w = 1;
         }
         else
         {
            now_w = -W % ((N * 4) - 4);
         }
         if (dir == 0)
         {
            dir = -1;
         }
      }

      if (dir == 1)
      {
         while (x != min || y != min || name_q.empty())
         {
            if (x < N && y==min)
            {
               name_q.push(map[y][x++]);
               continue;
            }
            else if (y < N && x==N)
            {
               name_q.push(map[y++][x]);
               continue;
            }
            else if (y == N && x > min)
            {
               name_q.push(map[y][x--]);
               continue;
            }
            else if (y > min && x == min)
            {
               name_q.push(map[y--][x]);
               continue;
            }
         }

         x = x + now_w;
         if (x > N)
         {
            to = now_w - N;
            x = N;
            y = y + to;
            if (y > N)
            {
               to = to - N;
               y = N;
               x = x - to;
               if (x < min)
               {
                  y = y - to;
                  x = min;
               }
            }
         }

         while (!name_q.empty())
         {
            if (x < N && y == min)
            {
               ans[y][x++] = name_q.front();
               name_q.pop();
               continue;
            }
            else if (y < N && x == N)
            {
               ans[y++][x] = name_q.front();
               name_q.pop();
               continue;
            }
            else if (y == N && x > min)
            {
               ans[y][x--] = name_q.front();
               name_q.pop();
               continue;
            }
            else if (y > min && x == min)
            {
               ans[y--][x] = name_q.front();
               name_q.pop();
               continue;
            }
         }
      }
      else if (dir == -1)
      {
         while (x != min || y != min || name_q.empty())
         {
            if (x < N && y == min)
            {
               name_q.push(map[y][x++]);
               continue;
            }
            else if (y < N && x == N)
            {
               name_q.push(map[y++][x]);
               continue;
            }
            else if (y == N && x > min)
            {
               name_q.push(map[y][x--]);
               continue;
            }
            else if (y > min && x == min)
            {
               name_q.push(map[y--][x]);
               continue;
            }
         }

         y = y + now_w;
         if (y > N)
         {
            to = now_w - N;
            y = N;
            x = x + to;
            if (x > N)
            {
               to = to - N;
               x = N;
               y = y - to;
               if (y < min)
               {
                  x = x - to;
                  y = min;
               }
            }
         }

         while (!name_q.empty())
         {
            if (x < N && y == min)
            {
               ans[y][x++] = name_q.front();
               name_q.pop();
               continue;
            }
            else if (y < N && x == N)
            {
               ans[y++][x] = name_q.front();
               name_q.pop();
               continue;
            }
            else if (y == N && x > min)
            {
               ans[y][x--] = name_q.front();
               name_q.pop();
               continue;
            }
            else if (y > min && x == min)
            {
               ans[y--][x] = name_q.front();
               name_q.pop();
               continue;
            }
         }
      }
      N--;
      min++;
      dir *= -1;
   }

   for (int i = 0; i < ans.size(); i++)
   {
      for(int j = 0; j < ans.size(); j++)
      {
         cout << ans[i][j];
         if (j != ans.size() - 1) {
            cout << " ";
         }
      }
      cout << endl;
   }

   return 0;
}