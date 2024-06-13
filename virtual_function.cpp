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
  A *ptr;
  ptr = &aob;
  ptr->show(); //base class
  ptr = &bob;
  ptr->show(); //derived class
  return 0;
}