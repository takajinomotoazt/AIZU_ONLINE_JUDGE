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
    // 1 -> W
    w = p->T1;
    // 4 -> 1
    p->T1 = p->W4;
    // 6 -> 4
    p->W4 = p->B6;
    // 3 -> 6
    p->B6 = p->E3;
    // 1 -> 3
    p->E3 = w;
    /* code */
    break;
  case 'W':

    // 1 w
    w = p->T1;
    // 3 1
    p->T1 = p->E3;
    // 6 3
    p->E3 = p->B6;
    // 4 6
    p->B6 = p->W4;
    // w 4
    p->W4 = w;
    break;
  case 'S':

    // 1 -> W
    w = p->T1;
    // 5 1
    p->T1 = p->N5;
    // 6 5
    p->N5 = p->B6;
    // 2 6
    p->B6 = p->S2;
    // 1 2
    p->S2 = w;
    break;
  case 'N':

    // 1 -> W
    w = p->T1;
    // 2 1
    p->T1 = p->S2;
    // 6 2
    p->S2 = p->B6;
    // 5 6
    p->B6 = p->N5;
    // 1 5
    p->N5 = w;
    break;

  default:
    break;
  }
}

int main()
{

  dice_t dice;
  string cmd;

  cin >> dice.T1 >> dice.S2 >> dice.E3 >> dice.W4 >> dice.N5 >> dice.B6;

  cin >> cmd;

  // // print all
  // cout << "dice.T1=" << dice.T1 << " ";
  // cout << "dice.S2=" << dice.S2 << " ";
  // cout << "dice.E3=" << dice.E3 << " ";
  // cout << "dice.W4=" << dice.W4 << " ";
  // cout << "dice.N5=" << dice.N5 << " ";
  // cout << "dice.B6=" << dice.B6 << endl;
  // cout << "cmd=" << cmd << endl;

  // process commands
  char c;
  for (int i = 0; i < cmd.length(); i++)
  {
    /* code */
    c = cmd.at(i);
    rotate(&dice, c);
  }

  cout << dice.T1 << endl;

  return 0;
}
