#include <iostream>
using namespace std;
int Count = 0;
class Test
{
public:
  Test()
  {
    Count++;
    cout << "No. of Object created: " << Count << endl;
  }

  ~Test()
  {
    cout << "No. of Object destroyed: " << Count << endl;
    Count--;
  }
};

int main()
{
  Test t, t1;

  return 0;
}
