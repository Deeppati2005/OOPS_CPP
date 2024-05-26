
#include <iostream>  //Header File/Pre-Processor
using namespace std; // Standard Library
// Creating Class
class Car
{
public: // Access Modifier
  // Properties Of Classes
  string brand;  // Attribute
  string color;  // Attribute
  string speed;  // Attribute
  string weight; // Attribute
  string series; // Attribute
  int seat;      // Attribute
public:
  // Behaviour
  void acceleration()
  {
    cout << "Acceleration Active";
  }
  void brake()
  {
    cout << "Brake Active";
  }
  void sound()
  {
    cout << "Sound Active";
  }

public:
  // Encapsulation Of The Properties Implemented
  // Encapsulation referred to binding of data.
  // Encapsulated Brand Property
  void setBrand(string brand)
  {
    this->brand = brand;
    // This Setter Function is taking the value and storing in brand variable
    // which is passed in parameter. The value is then passed to
    // brand proerty address of the Car class using this keyword. Here, direct
    // communication with the class property is avoided.
  }
  string getBrand()
  {
    return brand;
    // This Getter Function is just simply returning the value which
    // was stored in brand property address through the function.
    // Here also the direct communication with the class property is
    // avoided.
  }
  // Encapsulated Color Property
  void setColor(string color)
  {
    this->color = color;
  }
  string getColor()
  {
    return color;
  }
  // Encapsulated Speed Property
  void setSpeed(string speed)
  {
    this->speed = speed;
  }
  string getSpeed()
  {
    return speed;
  }
  // Encapsulated Weight Property
  void setWeight(string weight)
  {
    this->weight = weight;
  }
  string getWeight()
  {
    return weight;
  }
  // Encapsulated Series Property
  void setSeries(string series)
  {
    this->series = series;
  }
  string getSeries()
  {
    return series;
  }
  // Encapsulated Seat Property
  void setSeat(int seat)
  {
    this->seat = seat;
  }
  int getSeat()
  {
    return seat;
  }
};
int main()
{
  Car c;
  c.setBrand("Mercedez Benz");
  cout << c.getBrand() << endl;
  c.brand = "Mercedez";
  return 0;
}