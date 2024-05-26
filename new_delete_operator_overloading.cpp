#include <iostream>
using namespace std;

class Test
{
  int a, b;

public:
  Test(int x, int y)
  {
    a = x;
    b = y;
  }

  void display()
  {
    cout << "Value of a : " << a << "," << "Value of b : " << b << endl;
  }

  void *operator new(size_t size)
  {
    // size_t calculates the size of the parameters supllied.
    cout << "\n Overloaded new operator with size : " << size << endl;
    return malloc(size);
  }

  void operator delete(void *obj)
  {
    cout << "\n Overloaded delete operator";
    free(obj);
  }
};

int main()
{
  Test *t1;
  t1 = new Test(10, 20);
  t1->display();

  delete t1;
  return 0;
}