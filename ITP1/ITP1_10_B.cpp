#include <iostream>
#include <string>
// #include <math.h>
#include <iomanip>
#include <cmath>
#include <stdio.h>

using namespace std;

int main()
{

  int a, b, C;

  cin >> a >> b >> C;

  // cout << "a=" << a << endl;
  // cout << "b=" << b << endl;
  // cout << "C=" << C << endl;

  // S
  double S = (a * b * sin((M_PI / 180) * C)) / 2.0;

  // L
  double L = a + b + sqrt(pow(a, 2) + pow(b, 2) - 2.0 * a * b * cos((M_PI / 180) * C));

  // h
  double h = 2.0 * S / a;

  // cout << "S=" << S << endl;
  // cout << "L=" << L << endl;
  // cout << "h=" << h << endl;

  cout << fixed << setprecision(8) << S << endl;
  cout << fixed << setprecision(8) << L << endl;
  cout << fixed << setprecision(8) << h << endl;

  // cout << "L=" << L << endl;
  // cout << "h=" << h << endl;

  /*
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
  */

  return 0;
}
