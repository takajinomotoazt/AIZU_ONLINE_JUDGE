#include <iostream>
#include <string>

using namespace std;

int main()
{
  string x[1000];
  int cnt = 0;

  while (true)
  {
    cin >> x[cnt];
    if (x[cnt] == "0")
    {
      break;
    }
    cnt++;
  }

  long sum;
  char c;

  // compute all data
  for (int i = 0; i < cnt; i++)
  {

    // cout << "x[" << i << "]=" << x[i] << endl;

    sum = 0;
    for (int j = 0; j < x[i].length(); j++)
    {
      sum += (x[i].at(j) - 48);
    }
    cout << sum << endl;
  }

  return 0;
}
