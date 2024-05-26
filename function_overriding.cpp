#include <bits/stdc++.h>
using namespace std;
class A
{
public:
  void fun()
  {
    cout << "This is the base class" << endl;
  }
};
class B : public A
{
public:
  void fun()
  {
    cout << "This is the derived class" << endl;
  }
};
int main()
{
  A ob1;
  B ob2;
  ob1.fun();
  ob2.fun();
  ob2.A::fun(); // using scope resolution
  //using pointer
  // A *ptr;
  // ptr = &ob2;
  // ptr->fun();
}