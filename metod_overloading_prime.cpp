#include <iostream>
using namespace std;
int prime(int n)
{
  int i;
  if (n == 0 || n == 1)
  {
    return 1;
  }
  for (i = 2; i <= n / 2; i++)
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
  int i, j;
  for (i = a; i <= b; i++)
  {
    if (prime(i))
    {
      cout << i << " ";
    }
  }
}
int main()
{
  int a;
  prime(5);
  prime(2, 10);
}