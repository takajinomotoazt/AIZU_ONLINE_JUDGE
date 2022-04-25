#include <iostream>
// #include <iomanip>
// #include <cmath>

using namespace std;

string line(bool b, int a)
{
  string str = "";
  for (int i = 0; i < a; i++)
  {
    if (b)
    {
      str += "#";
      b = false;
    }
    else
    {
      str += ".";
      b = true;
    }
  }
  return str;
}

int main()
{

  int h[3000], w[3000];
  int cnt = 0;

  while (true)
  {
    cin >> h[cnt] >> w[cnt];

    if (h[cnt] == 0 && w[cnt] == 0)
    {
      break;
    }
    else
    {
      cnt++;
    }
  }

  for (int i = 0; i < cnt; i++)
  {
    for (int j = 0; j < h[i]; j++)
    {
      if ((j % 2) == 0)
      {
        cout << line(true, w[i]) << endl;
      }
      else
      {
        cout << line(false, w[i]) << endl;
      }
    }
    cout << endl;
  }

  return 0;
}
