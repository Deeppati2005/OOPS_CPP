#include <iostream>
using namespace std;
int main()
{
  int c, f;
  cout << "Enter the temp in C:";
  cin >> c;
  f = (9 * c + 160) / 5;
  cout << "F=" << f;
}