#include <iostream>
using namespace std;
class Armstrong
{
public:
  int isArmstrong(int n)
  {
    int sum = 0, a;
    int t = n;
    while (n > 0)
    {
      a = n % 10;
      sum = sum + (a * a * a);
      n = n / 10;
    }
    return sum == t;
  }
};
int main()
{
  Armstrong as;
  int n;
  cout << "Enter the no : ";
  cin >> n;
  if (as.isArmstrong(n))
  {
    cout << "The no is Armstrong ";
  }
  else
  {
    cout << "The no is Not a Armstrong no ";
  }
  return 0;
}