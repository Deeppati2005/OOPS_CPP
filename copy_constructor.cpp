#include <iostream>
using namespace std;
class MyClass
{
public:
  int data;

  // Default constructor
  MyClass()
  {
    cout << "Default constructor called" << endl;
    data = 0;
  }

  // Copy constructor
  MyClass(MyClass &value)
  {
    cout << "Copy constructor called" << endl;
    data = value.data;
  }
};

int main()
{
  MyClass obj1; // Create an object using the default constructor
  obj1.data = 10;

  MyClass obj2 = obj1; // Create a new object using the copy constructor

  cout << "obj1.data: " << obj1.data << endl;
  cout << "obj2.data: " << obj2.data << endl;

  return 0;
}