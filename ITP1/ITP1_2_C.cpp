#include <iostream>

using namespace std;

int main()
{
  int arr[3];
  int w;

  for (int i = 0; i < 3; i++)
  {
    cin >> arr[i];
  }

  for (int i = 0; i < 3; i++)
  {
    for (int j = i; j < 3; j++)
    {
      if (arr[i] > arr[j])
      {
        w = arr[i];
        arr[i] = arr[j];
        arr[j] = w;
      }
    }
  }

  cout << arr[0] << " " << arr[1] << " " << arr[2] << endl;

  return 0;
}
