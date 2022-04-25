#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  getline(std::cin, str);

  // cout << "str length=" << str.length() << endl;

  for (int i = 0; i < str.length(); i++)
  {
    char c = str.at(i);
    if (c >= 'a' && c <= 'z')
    {
      // lower case
      str.at(i) = c - ('a' - 'A');
    }
    else if (c >= 'A' && c <= 'Z')
    {
      // upper case
      str.at(i) = c + ('a' - 'A');
    }
  }

  cout << str << endl;

  return 0;
}
