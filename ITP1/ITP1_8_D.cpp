#include <iostream>
#include <string>

using namespace std;

int main()
{
  string s, p;
  cin >> s;
  cin >> p;

  bool yes = false;

  // cout << "#####" << endl;

  for (int i = 0; i < s.length(); i++)
  {
    // cout << s << endl;
    if (s.find(p) != string::npos)
    {
      yes = true;
      break;
    }
    s += s[0];
    s.erase(0, 1);
  }

  if (yes)
  {
    cout << "Yes" << endl;
  }
  else
  {
    cout << "No" << endl;
  }

  /*

vanceknowledgetoad
advance

vanceknowledgetoad
advanced

  */

  return 0;
}
