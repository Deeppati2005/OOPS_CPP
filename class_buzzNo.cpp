#include <iostream>
using namespace std;
class Buzz
{
public:
  int isBuzz(int n)
  {
    if (n % 7 == 0 || n % 10 == 7)
    {
      return true;
    }
    return false;
  }
};
int main()
{
  Buzz bz;
  int n;
  cout << "Enter the no : ";
  cin >> n;
  if (bz.isBuzz(n))
  {
    cout << "This is a buzz no";
  }
  else
  {
    cout << "This is a Not buzz no";
  }
  
}