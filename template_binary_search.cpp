#include <bits/stdc++.h>
using namespace std;
template <class T>
T binarySearch(T arr[], int left, int right, T key)
{
  while (left <= right)
  {
    int mid = (left + right) / 2;
    if (key == arr[mid])
    {
      return mid;
    }
    else if (key < arr[mid])
    {
      right = mid - 1;
    }
    else
    {
      left = mid + 1;
    }
  }
  return -1;
}
int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int n = (sizeof(arr) / sizeof(int));
  int key = 3;
  int result = binarySearch(arr, 0, n - 1, key);
  if (result == -1)
  {
    cout << "Element not found." << endl;
  }
  else
  {
    cout << "Element found at index " << result << endl;
  }

  double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
  int n2 = (sizeof(arr2) / sizeof(double));
  double key2 = 4.4;
  int result2 = binarySearch(arr2, 0, n2 - 1, key2);
  if (result2 == -1)
  {
    cout << "Element not found." << endl;
  }
  else
  {
    cout << "Element found at index " << result2 << endl;
  }
  return 0;
}