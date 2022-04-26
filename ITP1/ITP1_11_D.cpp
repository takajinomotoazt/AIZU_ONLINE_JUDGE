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
    // rotate(p, 'S');
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
    // rotate(p, 'N');
  }
}

int main()
{

  int n;
  cin >> n;

  dice_t dice[n];

  for (int i = 0; i < n; i++)
  {
    cin >> dice[i].T1 >> dice[i].S2 >> dice[i].E3 >> dice[i].W4 >> dice[i].N5 >> dice[i].B6;
  }

  // // print all
  // for (int i = 0; i < n; i++)
  // {
  //   cout << "dice[" << i << "].T1=" << dice[i].T1 << " ";
  //   cout << "dice[" << i << "].S2=" << dice[i].S2 << " ";
  //   cout << "dice[" << i << "].E3=" << dice[i].E3 << " ";
  //   cout << "dice[" << i << "].W4=" << dice[i].W4 << " ";
  //   cout << "dice[" << i << "].N5=" << dice[i].N5 << " ";
  //   cout << "dice[" << i << "].B6=" << dice[i].B6 << endl;
  // }
  // cout << "#####" << endl;

  bool yes = true;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      toTop(&dice[j], dice[i].T1);
      toFront(&dice[j], dice[i].S2);

      // // // print all
      // cout << "dice[" << i << "].T1=" << dice[i].T1 << " ";
      // cout << "dice[" << i << "].S2=" << dice[i].S2 << " ";
      // cout << "dice[" << i << "].E3=" << dice[i].E3 << " ";
      // cout << "dice[" << i << "].W4=" << dice[i].W4 << " ";
      // cout << "dice[" << i << "].N5=" << dice[i].N5 << " ";
      // cout << "dice[" << i << "].B6=" << dice[i].B6 << endl;
      // cout << "dice[" << j << "].T1=" << dice[j].T1 << " ";
      // cout << "dice[" << j << "].S2=" << dice[j].S2 << " ";
      // cout << "dice[" << j << "].E3=" << dice[j].E3 << " ";
      // cout << "dice[" << j << "].W4=" << dice[j].W4 << " ";
      // cout << "dice[" << j << "].N5=" << dice[j].N5 << " ";
      // cout << "dice[" << j << "].B6=" << dice[j].B6 << endl;

      if ((dice[i].T1 == dice[j].T1) && (dice[i].S2 == dice[j].S2) && (dice[i].E3 == dice[j].E3) &&
          (dice[i].W4 == dice[j].W4) && (dice[i].N5 == dice[j].N5) && (dice[i].B6 == dice[j].B6))
      {
        yes = false;
        break;
      }
    }
    if (!yes)
    {
      break;
    }
  }

  if (yes)
  {
    cout << "Yes";
  }
  else
  {
    cout << "No";
  }
  cout << endl;

  return 0;
}
