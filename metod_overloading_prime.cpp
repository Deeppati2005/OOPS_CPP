#include <iostream>
using namespace std;
class test
{
public:
  int prime(int n)
  {
    if (n <= 1)
    {
      return 0;
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
  int prime(int a, int b)
  {
    int i;
    for (i = a; i <= b; i++)
    {
      if (prime(i))
      {
        cout << i << " ";
      }
    }
  }
};
int main()
{
  test t;
  t.prime(5);
  t.prime(2, 10);
}