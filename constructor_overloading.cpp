#include <iostream>
using namespace std;

class Rectangle
{
  private:
  int length;
  int width;

public:
  // Default constructor
  Rectangle()
  {
    length = 0;
    width = 0;
  }

  // Parameterized constructor with one parameter
  Rectangle(int side)
  {
    length = side;
    width = side;
  }

  // Parameterized constructor with two parameters
  Rectangle(int l, int w)
  {
    length = l;
    width = w;
  }

  // Function to calculate the area of the rectangle
  int calculateArea()
  {
    return length * width;
  }
};

int main()
{
  Rectangle r1;       // Default constructor
  Rectangle r2(5);    // Parameterized constructor with one parameter
  Rectangle r3(4, 6); // Parameterized constructor with two parameters

  cout << "Area of r1: " << r1.calculateArea() << endl;
  cout << "Area of r2: " << r2.calculateArea() << endl;
  cout << "Area of r3: " << r3.calculateArea() << endl;

  return 0;
}