#include <iostream>
using namespace std;
class Flight
{
private:
  int flightnumber;
  char destination[100];
  float distance;
  float fuel;

  void Calfuel()
  {
    if (distance <= 1000)
    {
      fuel = 500;
    }
    else if (distance > 1000 && distance <= 2000)
    {
      fuel = 1100;
    }
    else
    {
      fuel = 2200;
    }
  }

public:
  void feed_info()
  {
    cout << "Enter flight number , distance , destination :";
    cin >> flightnumber >> distance;
    fflush(stdin);
    cin.getline(destination, 100);
    Calfuel();
  }
  void showfuel()
  {
    cout << "\n flight number : " << flightnumber
         << "\n destination : " << destination
         << "\n distance :" << distance
         << "\n fuel : " << fuel;
  }
};
int main()
{
  Flight f;
  f.feed_info();
  f.showfuel();
  return 0;
}