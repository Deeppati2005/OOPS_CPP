#include <iostream>
using namespace std;
class primecheck
{
public:
  int prime(int n)
  {
    if (n == 0 || n == 1)
    {
      return 1;
    }
    for (int i = 2; i <= n / 2; i++)
    {
      if (n % i == 0)
      {
        return 0;
      }
    }
    return 1;
  }
};
int main()
{
  primecheck pr;
  int n;
  cout << "Enter the no : ";
  cin >> n;
  if (pr.prime(n))
  {
    cout << "It is a Prime no";
  }
  else
  {
    cout << "It is a Not a Prime no";
  }
  return 0;
}