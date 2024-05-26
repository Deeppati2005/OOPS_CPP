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
  sort(a, a + n);
  cout << "The Third largest no is: " << a[n - 3] << endl;
  cout << "The Second Smallest no is: " << a[1] << endl;
  cout << "sum of third largest element and second smallest element : " << a[1] + a[2];
}
