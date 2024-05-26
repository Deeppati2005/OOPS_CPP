#include <iostream>
using namespace std;
template <class T1, class T2>
class cal
{
  T1 a;
  T2 b;

public:
  cal(T1 x, T2 y)
  {
    a = x;
    b = y;
  }
  void add()
  {
    cout << "Sum = " << a + b;
  }
  void sub()
  {
    cout << "Sub = " << a - b;
  }
  void mul()
  {
    cout << "Mul = " << a * b;
  }
  void div()
  {
    if (b == 0)
    {
      throw runtime_error("Runtime error");
    }
    cout << "Division = " << a / b;
  }
};
int main()
{
  try
  {
    cal<int, int> ob(2, 0);
    ob.add();
    cout << endl;
    ob.sub();
    cout << endl;
    ob.mul();
    cout << endl;
    ob.div();
    cout << endl;
  }
  catch (exception &e)
  {
    cout << e.what() << '\n';
  }
  try
  {
    cal<double, double> ob1(2.5, 3.5);
    ob1.add();
    cout << endl;
    ob1.sub();
    cout << endl;
    ob1.mul();
    cout << endl;
    ob1.div();
    cout << endl;
  }
  catch (exception &e)
  {
    cout << e.what() << '\n';
  }
  try
  {
    cal<char, char> ob2('a', 'b');
    ob2.add();
    cout << endl;
    ob2.sub();
    cout << endl;
  }
  catch (exception &e)
  {
    cout << e.what() << '\n';
  }
}