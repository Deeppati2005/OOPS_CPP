#include <iostream>
using namespace std;
template <class T1, class T2>
void sum(T1 a, T2 b)
{
  cout << a << "+" << b << "=" << a + b << endl;
}
int main()
{
  sum(10, 20);
  sum(2.5, 20);
  sum(5.2, 8.9);
  sum(7, 8.2);
}