#include <bits/stdc++.h>
using namespace std;
class A
{
public:
  virtual void show()
  {
    cout << "This is the base class " << endl;
  }
};
class B : public A
{
  public:
  void show()
  {
    cout << "This is the derived class " << endl;
  }
};
int main()
{
  A aob;
  B bob;
  A *bptr;
  bptr = &aob;
  bptr->show(); //base class
  bptr = &bob;
  bptr->show(); //derived class
  return 0;
}