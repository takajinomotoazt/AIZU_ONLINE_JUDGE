#include <iostream>

using namespace std;

int main()
{

  int n, m;
  cin >> n >> m;

  int arrA[n][m];
  int arrb[m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> arrA[i][j];
    }
  }

  for (int i = 0; i < m; i++)
  {
    cin >> arrb[i];
  }

  int w = 0;
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      w += arrA[i][j] * arrb[j];
    }
    cout << w << endl;
    w = 0;
  }

  return 0;
}
