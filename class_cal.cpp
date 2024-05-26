#include <iostream>
using namespace std;
class calculator
{
public:
  int add(int a, int b)
  {
    return a + b;
  }
  int sub(int a, int b)
  {
    return a - b;
  }
  int mul(int a, int b)
  {
    return a * b;
  }
  int div(int a, int b)
  {
    return a / b;
  }
};
int main()
{
  calculator cal;
  int ch;
  int a, b;
  cout << "Enter the 1st no : ";
  cin >> a;
  cout << "Enter the second no : ";
  cin >> b;
  cout << "\n Enter 1...add 2...sub 3...mul 4...div  : ";
  cin >> ch;
  switch (ch)
  {
  case 1:
    cout << "Sum = " << cal.add(a, b);
    break;

  case 2:
    cout << "Sub = " << cal.sub(a, b);
    break;

  case 3:
    cout << "Mul = " << cal.mul(a, b);
    break;

  case 4:
    cout << "Div = " << cal.div(a, b);
    break;

  default:
    break;
  }
  return 0;
}