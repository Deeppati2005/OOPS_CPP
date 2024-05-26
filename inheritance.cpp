#include <iostream>
using namespace std;
class phone1
{
public:
  // created method: feature 1 of phone 1
  void calling()
  {
    cout << "This phone has calling feature" << endl;
  }
  // created method: feature 2 of phone 1

  void radio()
  {
    cout << "This phone has radio feature" << endl;
  }
  // created method: feature 3 of phone 1

  void torch()
  {
    cout << "This phone has torch feature" << endl;
  }
};
class phone2 : public phone1
{
public:
  // all the methods pf phone1 inheritance
  // added a new feature gps in phone 2
  void gps()
  {
    cout << "This phone has gps feature" << endl;
  }
};

class phone3 : public phone2
{
public:
  void camera()
  {
    cout << "This phone has camera feature" << endl;
  }
};
int main()
{
  // creating Instance/object of class phone1
  phone1 p1;
  p1.calling();
  p1.radio();
  p1.torch();
  cout << endl;
  phone2 p2;
  p2.calling();
  p2.radio();
  p2.torch();
  p2.gps();
  phone3 p3;
  p3.camera();
}