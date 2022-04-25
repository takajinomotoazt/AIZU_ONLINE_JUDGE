#include <iostream>
#include <string>

using namespace std;

string shuffle(string str, int sz, int h)
{
  return str.substr(h) + str.substr(0, h);
}

int main()
{

  string str[10];

  int m[10];
  int h[10][200];
  int strCnt = 0;
  // int strCnt = 0;

  do
  {
    cin >> str[strCnt];
    if (str[strCnt] == "-")
    {
      break;
    }

    cin >> m[strCnt];

    for (int j = 0; j < m[strCnt]; j++)
    {
      cin >> h[strCnt][j];
    }
    strCnt++;

  } while (true);

  // print all data
  for (int i = 0; i < strCnt; i++)
  {
    cout << "str[" << i << "]=" << str[i] << endl;
    cout << "m[" << i << "]=" << m[i] << endl;

    for (int j = 0; j < m[i]; j++)
    {
      cout << "h[" << i << "][" << j << "]=" << h[i][j] << endl;
    }
  }
  cout << "##########" << endl;

  // do shuffle
  int arrSz = sizeof str / sizeof str[0];
  for (int i = 0; i < strCnt; i++)
  {
    for (int j = 0; j < m[i]; j++)
    {
      cout << "h[" << i << "][" << j << "]=" << h[i][j] << endl;
      str[i] = shuffle(str[i], arrSz, h[i][j]);
      cout << "after shuffle str[" << i << "]=" << str[i] << endl;
    }

    cout << str[i] << endl;
  }

  return 0;
}
