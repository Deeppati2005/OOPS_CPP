#include <iostream>
using namespace std;
class harshadno
{
public:
  int checkHarshad(int n)
  {
    int sum = 0;
    int t = n;
    while (n > 0)
    {
      int a = n % 10;
      sum = sum + a;
      n = n / 10;
    }
    return (t % sum == 0);
  }
};
int main()
{
  harshadno hs;
  int n;
  cout << "Enter the no : ";
  cin >> n;
  if (hs.checkHarshad(n))
  {
    cout << "The no is Harshad No";
  }
  else
  {
    cout << "The no is not Harshad No";
  }

  return 0;
}