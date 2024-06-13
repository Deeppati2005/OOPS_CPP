#include <iostream>
using namespace std;

template <class T>
 T linearSearch(T arr[], int size, T key)
{
  for (int i = 0; i < size; i++)
  {
    if (arr[i] == key)
    {
      return i;
    }
  }
  return -1;
}

int main()
{
  int arr1[] = {1, 2, 4, 5 ,3};
  int key1 = 3;
  int size1 = sizeof(arr1) / sizeof(arr1[0]);
  int result1 = linearSearch(arr1, size1, key1);
  if (result1 != -1)
  {
    cout << "Integer " << key1 << " found at index " << result1 << endl;
  }
  else
  {
    cout << "Integer " << key1 << " not found in the array" << endl;
  }

  // Test with an array of doubles
  double arr2[] = {1.1, 2.2, 3.3, 4.4, 5.5};
  double key2 = 4.4;
  int size2 = sizeof(arr2) / sizeof(arr2[0]);
  int result2 = linearSearch(arr2, size2, key2);
  if (result2 != -1)
  {
    cout << "Double " << key2 << " found at index " << result2 << endl;
  }
  else
  {
    cout << "Double " << key2 << " not found in the array" << endl;
  }
  return 0;
}
