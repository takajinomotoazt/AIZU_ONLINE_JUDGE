#include <iostream>

using namespace std;

int main()
{
  int w;
  int x[10000];
  int cnt = 0;

  while (true)
  {
    cin >> w;
    // cout << "w=" << w << endl;

    if (w == 0)
    {
      break;
    }
    x[cnt] = w;
    // cout << "x[" << cnt << "]=" << x[cnt] << endl;
    cnt++;
  }

  for (int i = 0; i < cnt; i++)
  {
    cout << "Case " << i + 1 << ": " << x[i] << endl;
  }

  return 0;
}
