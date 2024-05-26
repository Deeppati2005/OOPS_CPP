#include <bits/stdc++.h>
using namespace std;
class demo
{
private:
  int a, b;

public:
  demo()
  {
    a = 0;
    b = 0;
  }
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
  demo operator+(demo &obj)
  {
    demo tmp;
    tmp.a = a + obj.a;
    tmp.b = b + obj.b;
    return tmp;
  }
  // using friend function
  //  friend demo operator+(demo &obj1, demo &obj2);
};
// demo operator+(demo &obj1 , demo &obj2)
// {
//   demo tmp;
//   tmp.a = obj1.a + obj2.a;
//   tmp.b = obj1.b + obj2.b;
//   return tmp;
// }
int main()
{
  demo ob(10, 20);
  demo ob1(30, 40);
  demo ob2;
  ob2 = ob + ob1;
  ob2.show();
}