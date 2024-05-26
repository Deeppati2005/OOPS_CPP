#include <iostream>
using namespace std;
int main()
{
  int a[5];
  cout << "Enter the eliments:" << endl;
  for (int i = 0; i < 5; i++)
  {
    cin >> a[i];
  }
  for (int i = 0; i < 5; i++)
  {
    cout << "The eliment Present at index:" << i << " = " << a[i] << "\n";
  }
  int max = a[0];
  for (int i = 0; i < 5; i++)
  {
    if (a[i] > max)
    {
      max = a[i];
    }
  }
  cout << "The maximum no is =" << max;
}
