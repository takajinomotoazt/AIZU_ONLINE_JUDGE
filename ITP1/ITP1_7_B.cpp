#include <iostream>

using namespace std;

int main()
{

  int n[100], x[100];
  int lcnt = 0;
  int cnt = 0;

  while (true)
  {
    cin >> n[lcnt] >> x[lcnt];
    if (n[lcnt] == 0 && x[lcnt] == 0)
      break;
    lcnt++;
  }

  // for (int i = 0; i < lcnt; i++)
  // {
  //   cout << "n[" << i << "]=" << n[i];
  //   cout << " x[" << i << "]=" << x[i] << endl;
  // }

  for (int i = 0; i < lcnt; i++)
  {
    // init array
    int arr[n[i]];
    for (int j = 0; j < n[i]; j++)
    {
      arr[j] = j + 1;
      // cout << " arr[" << j << "]=" << arr[j];
    }
    // cout << endl;

    // finding combinations
    for (int j = 0; j < n[i]; j++)
    {
      // cout << "arr[" << j << "]=" << arr[j];
      for (int k = j + 1; k < n[i]; k++)
      {

        // cout << " + arr[" << k << "]=" << arr[k];
        for (int l = k + 1; l < n[i]; l++)
        {
          // cout << " + arr[" << l << "]=" << arr[l];
          // cout << " w=" << arr[j] + arr[k] + arr[l] << endl;
          if ((arr[j] + arr[k] + arr[l]) == x[i])
          {
            // cout << " ***" << endl;
            cnt++;
            break;
          }
        }
      }
    }
    cout << cnt << endl;
    cnt = 0;
  }

  return 0;
}
