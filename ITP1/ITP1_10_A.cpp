#include <iostream>
#include <string>
// #include <math.h>
#include <iomanip>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{

  double x1, y1, x2, y2;

  cin >> x1 >> y1 >> x2 >> y2;

  // cout << "x1=" << x1 << endl;
  // cout << "y1=" << y1 << endl;
  // cout << "x2=" << x2 << endl;
  // cout << "y2=" << y2 << endl;

  double dx = abs(x2 - x1);
  double dy = abs(y2 - y1);

  // cout << "dx=" << dx << endl;
  // cout << "dy=" << dy << endl;

  // printf("%.8lf\n", sqrt(pow(dx, 2) + pow(dy, 2)));
  // printf("%f\n", sqrt(pow(dx, 2) + pow(dy, 2)));
  // cout << sqrt(pow(dx, 2) + pow(dy, 2)) << endl;
  // cout << showpoint << sqrt(pow(dx, 2) + pow(dy, 2)) << endl;
  // cout << fixed << sqrt(pow(dx, 2) + pow(dy, 2)) << endl;
  cout << fixed << setprecision(8) << sqrt(pow(dx, 2) + pow(dy, 2)) << endl;

  return 0;
}
