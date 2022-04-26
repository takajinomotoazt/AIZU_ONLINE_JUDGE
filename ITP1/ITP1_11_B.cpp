#include <iostream>

using namespace std;

typedef struct
{
  int T1;
  int B6;
  int E3;
  int W4;
  int S2;
  int N5;
} dice_t;

void rotate(dice_t *p, char direction)
{
  int w;

  switch (direction)
  {
  case 'E':
    w = p->T1;
    p->T1 = p->W4;
    p->W4 = p->B6;
    p->B6 = p->E3;
    p->E3 = w;
    break;
  case 'W':
    w = p->T1;
    p->T1 = p->E3;
    p->E3 = p->B6;
    p->B6 = p->W4;
    p->W4 = w;
    break;
  case 'S':
    w = p->T1;
    p->T1 = p->N5;
    p->N5 = p->B6;
    p->B6 = p->S2;
    p->S2 = w;
    break;
  case 'N':
    w = p->T1;
    p->T1 = p->S2;
    p->S2 = p->B6;
    p->B6 = p->N5;
    p->N5 = w;
    break;
  case 'R': // CW
    w = p->S2;
    p->S2 = p->E3;
    p->E3 = p->N5;
    p->N5 = p->W4;
    p->W4 = w;
    break;
  case 'L': // CCW
    w = p->S2;
    p->S2 = p->W4;
    p->W4 = p->N5;
    p->N5 = p->E3;
    p->E3 = w;
    break;

  default:
    break;
  }
}

void toTop(dice_t *p, int n)
{

  if (n == p->T1)
  {
    // Nop
  }
  if (n == p->S2)
  {
    rotate(p, 'N');
  }
  if (n == p->E3)
  {
    rotate(p, 'W');
  }
  if (n == p->W4)
  {
    rotate(p, 'E');
  }
  if (n == p->N5)
  {
    rotate(p, 'S');
  }
  if (n == p->B6)
  {
    rotate(p, 'S');
    rotate(p, 'S');
  }
}

void toFront(dice_t *p, int n)
{

  if (n == p->T1)
  {
    rotate(p, 'S');
  }
  if (n == p->S2)
  {
    // Nop
  }
  if (n == p->E3)
  {
    rotate(p, 'R');
  }
  if (n == p->W4)
  {
    rotate(p, 'L');
  }
  if (n == p->N5)
  {
    rotate(p, 'R');
    rotate(p, 'R');
  }
  if (n == p->B6)
  {
    rotate(p, 'N');
  }
}

int main()
{

  dice_t dice;
  // string cmd;
  int q;
  cin >> dice.T1 >> dice.S2 >> dice.E3 >> dice.W4 >> dice.N5 >> dice.B6;

  cin >> q;

  int t[q], f[q];

  for (int i = 0; i < q; i++)
  {
    cin >> t[i] >> f[i];
  }

  // // // print all
  // for (int i = 0; i < q; i++)
  // {
  //   cout << "t[" << i << "]=" << t[i];
  //   cout << "f[" << i << "]=" << f[i] << endl;
  // }

  //
  for (int i = 0; i < q; i++)
  {
    toTop(&dice, t[i]);
    toFront(&dice, f[i]);
    cout << dice.E3 << endl;
  }

  return 0;
}
