#include <iostream>
using namespace std;
int main()
{
  int a[5] = {11, 12, 13, 14, 15};
  int size = sizeof(a) / sizeof(int);
  for (int i = 0; i < size; i++)
  {
    cout << "The eliment Present at index:" << i << " = " << a[i] << "\n";
  }
  a[2] = 33;
  cout << "New array eliments: " << endl;
  for (int i = 0; i < size; i++)
  {
    cout << "The eliment Present at index:" << i << " = " << a[i] << "\n";
  }

  // int a[100];
  // int n;
  // cout << "Enter the size of the array:" <<endl;
  // cin >> n;
  // cout << "Enter the eliments:" <<endl;
  // for (int i = 0; i < n; i++)
  // {
  //   cin >> a[i];
  // }

  // for (int i = 0; i < n; i++)
  // {
  //   cout << "The eliment Present at index:" << i << " = " << a[i] << "\n";
  // }
}