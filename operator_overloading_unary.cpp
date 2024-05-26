#include <bits/stdc++.h>
using namespace std;
class demo
{
private:
  int a, b;

public:
  demo(int x, int y)
  {
    a = x;
    b = y;
  }
  void show()
  {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
  }
  // using class function
  demo operator-()
  {
    a = -a;
    b = -b;
  }
  // using friend function
  // friend void operator-(demo &obj);
};
// void operator-(demo &obj)
// {
//   obj.a = -obj.a;
//   obj.b = -obj.b;
// }
int main()
{
  demo ob(10, 20);
  ob.show();
  -ob;
  ob.show();
}