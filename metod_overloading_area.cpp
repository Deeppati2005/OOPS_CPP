#include <iostream>
using namespace std;

void area(int a)
{
  cout << "\n area of square=" << a * a;
}

void area(float a)
{
  cout << "\n area of circle=" << 3.14 * a * a;
}

void area(int a, int l)
{
  cout << "\n area of rectangle=" << a * l;
}

void area(float a, float l)
{
  cout << "\n area of triangle=" << (a * l) / 2;
}

int main()
{
  area(4);
  area(1.5f);
  area(2, 3);
  area(2.1f, 3.2f);
}