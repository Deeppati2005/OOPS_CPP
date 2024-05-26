#include <iostream>
using namespace std;
int prime(int n)
{
  int i;
  if (n == 0 || n == 1)
  {
    return 1;
  }
  for (i = 2; i <= n / 2; i++)
  {
    if (n % i == 0)
    {
      return 0;
    }
  }
  return 1;
}
int main()
{
  int a[100];
  int n;
  cout << "Enter the size of the array:" << endl;
  cin >> n;
  cout << "Enter the eliments:" << endl;
  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < n; i++)
  {
    cout << "The eliment Present at index:" << i << " = " << a[i] << "\n";
  }
  int sum = 0;
  for (int i = 0; i < n; i++)
  {
    if (prime(a[i]))
    {
      sum = sum + a[i];
    }
  }
  cout << "Sum = " << sum;
}