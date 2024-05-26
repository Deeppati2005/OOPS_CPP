#include <iostream>
using namespace std;
class Sal
{
public:
  int os;

public:
  int calcNS(int os)
  {
    int ns = os + os * 0.1;
    return ns;
  }
};

int main()
{
  Sal s;
  cout << "Enter the old sal :";
  cin >> s.os;
  int z = s.calcNS(s.os);
  cout << "New Incremented Salary :: " << z << endl;
}