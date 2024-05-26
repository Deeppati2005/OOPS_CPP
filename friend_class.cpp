#include <bits/stdc++.h>
using namespace std;
class A
{
private:
  int a = 10, b = 20;

public:
  void show()
  {
    cout << "Value of a = " << a << " " << "Value of b = " << b << endl;
  }
  friend class B;
};
class B
{
public:
  void add(A r)
  {
    cout << "Sum of 2 nos are : " << r.a + r.b;
  }
};
int main()
{
  A ob1;
  ob1.show();
  B ob2;
  ob2.add(ob1);
}