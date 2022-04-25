#include <iostream>
#include <string>

using namespace std;

int main()
{
  string W, tmp;
  string T = "";
  int cnt = 0;

  cin >> W;

  while (true)
  {
    getline(std::cin, tmp);
    if (tmp == "END_OF_TEXT")
    {
      break;
    }
    T += tmp + " ";
  }

  char c;
  for (int i = 0; i < T.length(); i++)
  {
    c = T.at(i);
    if (c >= 'A' && c <= 'Z')
    {
      // to lowercase
      T.at(i) = c + ('a' - 'A');
    }
  }

  // cout << T << endl;
  int loc = T.find(W);
  do
  {

    if (loc == string::npos)
    {
      break;
    }
    //
    // checking prev char
    if ((loc == 0) || (T.at(loc - 1) == ' '))
    {
      // checking next char

      // cout << (loc + W.length()) << endl;
      // cout << T.length() << endl;
      // cout << T.at(loc + W.length()) << endl;

      if (((loc + W.length()) == T.length()) ||
          (T.at(loc + W.length()) == ' '))
      {
        // cout << T.substr(loc, W.length()) << endl;
        // cout << "W=" << W << endl;

        if (T.substr(loc, W.length()) == W)
        {

          cnt++;
          // cout << "cnt=" << cnt;
          // cout << " loc=" << loc << endl;
          // cout << " T=" << T << endl;
          T.erase(0, loc + W.length());
          loc = T.find(W);
        }
        else
        {
          if (loc++ >= (T.length() - W.length()))
          {
            break;
          }
        }
      }
      else
      {
        if (loc++ >= (T.length() - W.length()))
        {
          break;
        }
      }
    }
    else
    {
      if (loc++ >= (T.length() - W.length()))
      {
        break;
      }
    }

  } while (true);

  cout << cnt << endl;

  return 0;
}
