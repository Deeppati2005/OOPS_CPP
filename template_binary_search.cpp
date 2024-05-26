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
}