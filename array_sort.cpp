#include <bits/stdc++.h>
using namespace std;
int main()
{
  int a[100], n;
  cout << "Enter the size of the array : ";
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
  cout << "Sorted array: " << endl;
  sort(a, a + n);
  for (int i = 0; i < n; i++)
  {
    cout << "The eliment Present at index:" << i << " = " << a[i] << "\n";
  }
  cout << "The Second largest no is: " << a[n - 2];
}
