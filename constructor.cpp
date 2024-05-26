#include <iostream>
using namespace std;
class A
{
  int a, b;

public:
  A()
  {
    cout << "Default constructor ";
    a = b = 0;
  }
  A(int x, int y)
  {
    cout << "\n Paramaterized Constructor ";
    a = x; // this->a=x;
    b = y; // this->b=y;
  }
  void show()
  {
    cout << "\n a = " << a << " b =" << b;
  }
};
int main()
{
  A ob;
  ob.show();
  A ob1(10, 20);
  ob1.show();
}