#include <iostream>

using namespace std;

int main()
{
  int in_s;
  cin >> in_s;

  // h:m:s
  int h, m, s;

  s = in_s % 60;
  m = in_s / 60;
  h = m / 60;
  m = m % 60;

  cout << h << ":" << m << ":" << s << endl;

  return 0;
}
