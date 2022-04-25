#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

  int n;
  cin >> n;

  string cards[n][2];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      cin >> cards[i][j];
    }
  }

  // // print all data
  // cout << "n=" << n << endl;
  // for (int i = 0; i < n; i++)
  // {
  //   for (int j = 0; j < 2; j++)
  //   {

  //     cout << "cards[" << i << "][" << j << "]=" << cards[i][j] << endl;
  //   }
  // }
  // cout << "##########" << endl;

  int t = 0,
      h = 0;

  for (int i = 0; i < n; i++)
  {
    if (cards[i][0] == cards[i][1])
    {
      t++;
      h++;
    }
    else
    {

      if (cards[i][0] > cards[i][1])
      {
        t += 3;
      }
      else
      {
        h += 3;
      }
    }
  }
  cout << t << " " << h << endl;
  return 0;
}
