#include <iostream>
// #include <iomanip>
// #include <cmath>

using namespace std;

string line(int a)
{
  string str = "";
  for (int i = 0; i < a; i++)
  {
    if (i == 0 || i == a - 1)
    {
      str += "#";
    }
    else
    {
      str += ".";
    }
  }
  return str;
}

string line1(int a)
{
  string str = "";
  for (int i = 0; i < a; i++)
  {
    str += "#";
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
      if (j == 0 || j == (h[i] - 1))
      {
        cout << line1(w[i]) << endl;
      }
      else
      {
        cout << line(w[i]) << endl;
      }
    }
    cout << endl;
  }

  return 0;
}
