#include <iostream>
using namespace std;

class device
{
public:
  int price;
  // constructer created  
  device()
  {
    price = 200;
    cout << "Price : " << price << endl;
  }
  void call()
  {
    cout << "Act as walkie Talkie" << endl;
  }
};
class device2
{
public:
  int price;
  device2()
  {
    price = 4000;
    cout << "This is device 2 . Price = " << price << endl;
  }
  void specs()
  {
    cout << "1 TB Memory" << endl;
  }
};
int main()
{
  device d;
  d.call();
  device2 d2;
}