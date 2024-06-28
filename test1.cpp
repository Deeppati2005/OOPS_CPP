#include <iostream>
using namespace std;
class test
{
protected:
  int protectvar;

private:
  int privatevar;

public:
  void show()
  {
    cout << "Protect : " << protectvar << endl;
    cout << "Private : " << privatevar << endl;
  }
  friend test fun(test &obj);
};
test fun(test &obj)
{
  obj.privatevar = 20;
  obj.protectvar = 30;
  return obj;
}
int main()
{
  test ob1;
  ob1 = fun(ob1);
  ob1.show();
}