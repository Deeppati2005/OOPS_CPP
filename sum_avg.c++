#include <iostream>
using namespace std;
int main()
{
  float a, b, c;
  float sum, avg;
  cout << "Enter 3 subject marks:";
  cin >> a >> b >> c;
  sum = a + b + c;
  avg = sum / 3;
  cout << "sum=" << sum << endl;
  cout << "avg=" << avg << endl;
}