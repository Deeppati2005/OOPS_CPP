#include <iostream>
using namespace std;

class Number
{
private:
  int num1, num2;

public:
  Number(int a, int b) //: num1(a), num2(b) {}
  {
    this->num1 = a;
    this->num2 = b;
  }

  // Friend function declaration
  friend int add(Number n);
};

int add(Number n)
{
  return n.num1 + n.num2;
}

int main()
{
  // Creating an object of the Number class
  Number n(5, 10);
  cout << "The sum is: " << add(n) << endl;
  return 0;
}
