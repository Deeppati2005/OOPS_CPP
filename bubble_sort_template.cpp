#include <iostream>
using namespace std;
template <class T>
void sort(T a[], int n)
{
  int i, j;
  T tmp;
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (a[j] > a[i + 1])
      {
        tmp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = tmp;
      }
    }
  }
}
template <class T>
void show(T a[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << a[i] << "";
    cout << endl;
  }
}
int main()
{
  int a[] = {9, 1, 7};
  float b[] = {8.5, 1.2, 3.6};
  char c[] = {'A', 'E', 'C'};
  sort(a, 3);
  sort(b, 3);
  sort(c, 3);
  show(a, 3);
  show(b, 3);
  show(c, 3);
}