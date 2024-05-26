#include <iostream>
using namespace std;
class tour
{
private:
  char tcode[20];
  int noofadults;
  int noofkids;
  int kilometres;
  float totalfare;

public:
  tour()
  {
    tcode[0] = '\0';
    noofadults = 0;
    noofkids = 0;
    kilometres = 0;
    totalfare = 0;
  }
  int assignfare()
  {
    if (kilometres >= 1000)
    {
      totalfare = 500 * noofadults + 250 * noofkids;
    }
    else if (kilometres < 1000 && kilometres >= 500)
    {
      totalfare = 300 * noofadults + 150 * noofkids;
    }
    else
    {
      totalfare = 200 * noofadults + 100 * noofkids;
    }
    return totalfare;
  }
  void enterfare()
  {
    cout << "Enter the TCode : ";
    cin.getline(tcode, 10);
    fflush(stdin);
    cout << "Enter the value of NoofAdults : ";
    cin >> noofadults;
    cout << "Enter the value of NoofKids : ";
    cin >> noofkids;
    cout << "Enter the kilometres : ";
    cin >> kilometres;
    assignfare();
  }
  void showtour()
  {
    cout << "TCode : " << tcode << endl;
    cout << "NoofAdults : " << noofadults << endl;
    cout << "NoofKids : " << noofkids << endl;
    cout << "Kilometres : " << kilometres << endl;
    cout << "Totalfare : " << totalfare << endl;
  }
};
int main()
{
  tour ob;
  ob.enterfare();
  ob.showtour();
  return 0;
}