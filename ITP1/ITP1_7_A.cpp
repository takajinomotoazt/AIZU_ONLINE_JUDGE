#include <iostream>

using namespace std;

int main()
{

  int m[50], f[50], r[50];
  int cnt = 0;

  while (true)
  {
    cin >> m[cnt] >> f[cnt] >> r[cnt];
    if (m[cnt] == -1 && f[cnt] == -1 && r[cnt] == -1)
      break;
    cnt++;
  }

  // for (int i = 0; i < cnt; i++)
  // {
  //   cout << "m[" << i << "]=" << m[i];
  //   cout << " f[" << i << "]=" << f[i];
  //   cout << " r[" << i << "]=" << r[i] << endl;
  // }

  for (int i = 0; i < cnt; i++)
  {
    if (m[i] == -1 || f[i] == -1)
    {
      cout << "F";
    }
    else if ((m[i] + f[i]) >= 80)
    {
      cout << "A";
    }
    else if ((m[i] + f[i]) >= 65)
    {
      cout << "B";
    }
    else if ((m[i] + f[i]) >= 50)
    {
      cout << "C";
    }
    else if ((m[i] + f[i]) >= 30)
    {
      if (r[i] >= 50)
      {
        cout << "C";
      }
      else
      {
        cout << "D";
      }
    }
    else
    {
      cout << "F";
    }

    cout << endl;
  }

  return 0;
}
