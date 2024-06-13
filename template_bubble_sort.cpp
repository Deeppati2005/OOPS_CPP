#include <bits/stdc++.h>
using namespace std;
template <class T>
void bubbleSort(T arr[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        T tmp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = tmp;
      }
    }
  }
}
template <class T>
void show(T arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int n = sizeof(arr) / sizeof(arr[0]);
  bubbleSort(arr, n);
  cout << "Sorted array for int : " << endl;
  show(arr, n);
  double arr2[] = {64.3, 34.1, 25.3, 12.3, 22.3, 11.3, 90.3};
  int n2 = sizeof(arr2) / sizeof(arr2[0]);
  bubbleSort(arr2, n2);
  cout << "Sorted array for double : " << endl;
  show(arr2, n2);
  return 0;
}