#include <iostream>
#include <string>

using namespace std;

int main()
{

  string str;
  cin >> str;

  int q;
  cin >> q;

  string cmd[q];
  int a[q], b[q];
  string p[q];

  for (int i = 0; i < q; i++)
  {
    cin >> cmd[i];
    if (cmd[i] == "replace")
    {
      cin >> a[i] >> b[i] >> p[i];
    }
    else
    {
      cin >> a[i] >> b[i];
    }
  }

  // // // print all data
  // cout << "str=" << str << endl;
  // cout << "q=" << q << endl;

  // for (int i = 0; i < q; i++)
  // {
  //   cout << "cmd[" << i << "]=" << cmd[i];
  //   cout << " a[" << i << "]=" << a[i];
  //   cout << " b[" << i << "]=" << b[i];
  //   cout << " p[" << i << "]=" << p[i] << endl;
  // }
  // cout << "##########" << endl;

  //

  for (int i = 0; i < q; i++)
  {
    if (cmd[i] == "print")
    {
      // cout << "print=" << str.substr(a[i], (b[i] - a[i] + 1)) << endl;
      cout << str.substr(a[i], (b[i] - a[i] + 1)) << endl;
    }
    else if (cmd[i] == "reverse")
    {
      string s = str.substr(a[i], (b[i] - a[i] + 1));
      string tmp = "";

      for (int j = s.length() - 1; j >= 0; j--)
      {
        tmp += s[j];
      }

      // cout << "s=" << s << endl;
      // cout << "str.substr(0,a[" << i << "])=" << str.substr(0, a[i]) << endl;
      // cout << "tmp=" << tmp << endl;
      // cout << "str.substr(b[i])=" << str.substr(b[i] + 1) << endl;

      str = str.substr(0, a[i]) + tmp + str.substr(b[i] + 1);

      // cout << "reverse=" << str << endl;
    }
    else if (cmd[i] == "replace")
    {
      string s = str.substr(a[i], (b[i] - a[i] + 1));

      // cout << "s=" << s << endl;
      // cout << "str.substr(0,a[" << i << "])=" << str.substr(0, a[i]) << endl;
      // cout << "p[" << i << "]=" << p[i] << endl;
      // cout << "str.substr(b[i] + 1)) =" << str.substr(b[i] + 1) << endl;

      str = str.substr(0, a[i]) + p[i] + str.substr(b[i] + 1);

      // cout << "replace=" << str << endl;
    }
    // cout << "##########" << endl;
  }

  return 0;
}

/*
abcdefghij
15
reverse 3 7
print 1 8
replace 1 3 xyz
print 1 8
replace 4 6 fff
print 1 8
replace 5 5 o
print 1 8
reverse 3 7
print 1 8
replace 8 9 xy
print 0 9
reverse 3 8
reverse 0 5
print 0 9



*/