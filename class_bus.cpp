#include <iostream>
using namespace std;
class Bus
{
  int busno;
  char from[20];
  char to[20];
  char type;
  float distance;
  float fare;

public:
  Bus()
  {
    type = 'O';
    fare = 500;
  }
  int calfare()
  {
    if (type == 'O')
    {
      fare = 15 * distance;
    }
    else if (type == 'E')
    {
      fare = 20 * distance;
    }
    else
    {
      fare = 24 * distance;
    }
    return fare;
  }
  void Allocate()
  {
    cout << "Enter the Bus no:";
    cin >> busno;
    cout << "Enter the from :";
    fflush(stdin);
    cin.getline(from, 20);
    cout << "Enter the to :";
    cin.getline(to, 20);
    cout << "Enter the type :";
    cin >> type;
    cout << "Enter the distance :";
    cin >> distance;
    calfare();
  }
  void show()
  {
    cout << "Bus no : " << busno << " From : " << from << " To : " << to << " Type : " << type << " Distance : " << distance << " Fare :" << fare;
  }
};
int main()
{
  Bus ob;
  ob.Allocate();
  ob.show();
  return 0;
}