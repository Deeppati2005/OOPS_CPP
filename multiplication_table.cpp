#include <iostream>
using namespace std;
int main()
{
  int n;
  cout << "Enter the no:";
  cin >> n;
  for (int i = 1; i <= 5; i++)
  {
    cout << n << " X " << i << " = " << (n * i) << endl;
  }
  return 0;
}
