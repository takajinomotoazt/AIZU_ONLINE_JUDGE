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
  int startPos = 0;
  long loc = string::npos;
  string subT;

  do
  {
    subT = T.substr(startPos);

    loc = subT.find(W);

    if (loc == string::npos)
    {
      break;
    }

    // checking prev char
    if ((startPos == 0) || (T.at(startPos + loc - 1) == ' '))
    {
      // checking next char

      // cout << "startPos=" << startPos << endl;
      // cout << "loc=" << loc << endl;
      // cout << "W.length()=" << W.length() << endl;
      // cout << "subT.length()=" << subT.length() << endl;
      // cout << "subT=" << subT << endl;

      if (((loc + W.length()) == subT.length()) ||
          (subT.at(loc + W.length()) == ' '))
      {
        cnt++;
        // cout << "cnt=" << cnt << endl;
      }
    }

    startPos += loc + W.length();
    // cout << "startPos afer=" << startPos << endl;

    if (startPos >= (T.length() - W.length()))
    {
      break;
    }

  } while (true);

  cout << cnt << endl;

  return 0;
}
/*

aizu
Aizu x aizu AIZU aIzu aiZu a
a i z u aiz a izu
END_OF_TEXT

======
aizu
aaa aizu xxx xx x xxx aizu y yyyy a a a a a a aizu
aaa aa xxx WWW AAA aize aiza AIZZ AAA III a i z u aizu aizu aizu
SSS SS S aizu AAAAAAA a a a a a x x x x aizu zia uzia uzia aizu aizu aizu aizu
Aizu hyoooon pupupupu ohohohoh
aa eee fff eee fff ee f f f f f f f AIZU bebebebebebe ai zu a izu aiz u
Aizu aizu Aizu AIzU
end_of_text
END_OF_TEXP
aizu Aizu
END_OF_TEXT

======
aaaaaaaaaa
bb bb bb aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa
aaa aaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa
aaaaaaaaaa xxx xxxxxxxxx aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa
aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa b b b b b b b aaaaaaaaaa aaaaaaaaaa
aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaaa a a a a
aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa
aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa a a a a
aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa x
aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa x x x x
aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa aaaaaaaaaa x x xaaaaaaaaaa
END_OF_TEXT

======

x
sfjioeixi x oeif  x oie  xx foe xx x xx fiwej x
aaasfjioeixi x oeif  x oie  xx foe xx x xx fiwej x
xxkxooxx yyy aaaa aa a a  a a  a a a x xxxx xx x x x xxx x x xxx
xoixxx  bb b ba aa a a  a a  a a a x xxxx xx x x x xxx x x xxx
sfjioeixi x oeif  x oie  xx foe xx x
xx fiwxxkxooxx yyy aaaa aa a a  a a  a a a x xxxx xx  xx x xxx x x xxxejx
xoixxx  bb b ba aa a a  a a  a a a x xxxx xx x x x xxx x x xxx
s x x x
x
  x
x
fjioeixi x oeif  x oie  xxxxkxooxx yyy
aaaa aa a a  a a  a a a x xxxx xx x x x xxx x x xxx foe xx x xx fiwej x
aaaa aa a a  a a  a a a x xxxx xx x x x xxx x x xxx
END_OF_TEXT

*/
