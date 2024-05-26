#include <iostream>
using namespace std;

class Area
{
private:
  float length;
  float breadth;

public:
  float setDim(float l, float b)
  {
    length = l;
    breadth = b;
  }
  float getArea(float l, float b)
  {

    return length * breadth;
  }
};
int main()
{
  float l, b;
  Area a;
  cout << "Enter the length :" << endl;
  cin >> l;
  cout << "Enter the breadth :" << endl;
  cin >> b;
  a.setDim(l, b);
  float area = a.getArea(l, b);
  cout << "Area of the rectangle: " << area << endl;
}