#include <iostream>
using namespace std;
// Polymorphism Contains Overloading and overriding of functions
class operation
{
public:
  int add(int a, int b)
  {
    return a + b;
  }
  double add(double a, double b)
  {
    return (double)(a + b);
  }
};
int main()
{
  operation op;
  int intadd = op.add(1, 2);
  cout << intadd << endl;
  double floatadd = op.add(2.2, 3.2);
  cout << floatadd << endl;
  return 0;
}