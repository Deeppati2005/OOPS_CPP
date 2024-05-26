#include <iostream>
using namespace std;
class perfectNo
{
public:
  int isPerfect(int n)
  {
    int sum = 0;
    for (int i = 1; i < n; i++)
    {
      if (n % i == 0)
      {
        sum = sum + i;
      }
    }
    return sum == n;
  }
};
int main()
{
  perfectNo pr;
  int n;
  cout << "Enter the no : ";
  cin >> n;
  if (pr.isPerfect(n))
  {
    cout << "It is a Perfect no";
  }
  else
  {
    cout << "It is a Not a Perfect no";
  }
  return 0;
}