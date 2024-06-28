#include <iostream>
using namespace std;
class test
{
private:
  int privar;

protected:
  int provar;

public:
  test()
  {
    privar = 20;
    provar = 30;
  }
  friend void fun(test &obj);
};
void fun(test &obj)
{
  cout << "Private Variable : " << obj.privar << endl;
  cout << "Protected Variable : " << obj.provar << endl;
}
int main()
{
  test obj;
  fun(obj);
  return 0;
}