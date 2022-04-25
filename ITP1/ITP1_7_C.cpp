#include <iostream>

using namespace std;

int main()
{

  int r, c;
  cin >> r >> c;

  int arr[r + 1][c + 1];

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      cin >> arr[i][j];
    }
  }

  // init array
  for (int i = 0; i < r + 1; i++)
  {
    arr[i][c] = 0;
  }
  for (int i = 0; i < c + 1; i++)
  {
    arr[r][i] = 0;
  }

  // compute
  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      arr[i][c] += arr[i][j];
      arr[r][j] += arr[i][j];
      arr[r][c] += arr[i][j];
    }
  }

  for (int i = 0; i < r + 1; i++)
  {
    for (int j = 0; j < c + 1; j++)
    {
      cout << arr[i][j];
      if (j < c)
      {
        cout << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
