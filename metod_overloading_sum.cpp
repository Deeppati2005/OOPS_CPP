#include <iostream>
using namespace std;
void sum(int a, int b)
{
  cout << "\n Sum=" << a + b;
}
void sum(float a, float b)
{
  cout << "\n Sum=" << a + b;
}
void sum(int a, int b, int c)
{
  cout << "\n Sum=" << a + b + c;
}
int main()
{
  sum(1, 2);
  sum(1, 2, 3);
  sum(1.2f, 1.3f);
}