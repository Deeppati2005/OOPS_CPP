#include <iostream>
using namespace std;

class MyClass
{
private:
  int *data;

public:
  MyClass()
  {
    data = new int; // Allocate memory dynamically
    *data = 0;      // Initialize data
    cout << "Dynamic constructor called" << endl;
  }

  ~MyClass()
  {
    delete data; // Deallocate memory
    cout << "Destructor called" << endl;
  }

  void setData(int value)
  {
    *data = value;
  }

  int getData()
  {
    return *data;
  }
};

int main()
{
  MyClass obj;
  obj.setData(42);
  cout << "Data: " << obj.getData() << endl;

  return 0;
}