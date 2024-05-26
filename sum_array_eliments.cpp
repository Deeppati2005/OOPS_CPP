#include <iostream>
using namespace std;
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
    sum = sum + a[i];
  }
  cout << "Sum : " << sum;
}