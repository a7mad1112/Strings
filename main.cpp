#include <iostream>
#include <string>
using namespace std;

int main()
{
  /*
    The size of the string A and size of the string B separated by a space
    The string produced by concatenating A and B (A + B).
    The two strings separated by a single space respectively, after swapping their first character.
  */
  string a, b;
  cin >> a >> b;
  // The size of the string A and size of the string B separated by a space => 10 7
  cout << a.size() << " " << b.size() << endl;
  // The string produced by concatenating A and B (A + B).
  cout << a + b << endl;
  // The two strings separated by a single space respectively, after swapping their first character.
  char temp = a[0];
  a[0] = b[0];
  b[0] = temp;
  cout << a << " " << b;
  cout << endl << a[0];
  /*
  a: abcd
  b: ef

  char temp = a[0];
  a: abcd
  b: ef
  temp: a

  a[0] = b[0];
  a: ebcd
  b: ef
  temp: a

  b[0] = temp;
  a: ebcd
  b: af
  temp: a
  */
  return 0;
}