#include <iostream>
using namespace std;
class applicant
{
private:
  long ano;
  char name[100];
  float agg;
  char grade;
  void grademe()
  {
    if (agg >= 80)
    {
      grade = 'A';
    }
    else if (agg < 80 && agg >= 65)
    {
      grade = 'B';
    }
    else if (agg < 65 && agg >= 50)
    {
      grade = 'C';
    }
    else
    {
      grade = 'D';
    }
  }

public:
  void enter()
  {
    cout << "\n Values for ANO : ";
    cin >> ano;
    cout << "\n Enter the aggrigade : ";
    cin >> agg;
    fflush(stdin);
    cout << "\n Enter the name : ";
    cin.getline(name, 100);
    grademe();
  }
  void result()
  {
    cout << "\n Admission no :" << ano
         << "\n aggrigade marks :" << agg
         << "\n Name  : " << name
         << "\n Grade : " << grade;
  }
  int calculate()
  {
    return agg;
  }
};
int main()
{
  applicant a;
  a.enter();
  a.result();
  cout << " \n Percentage : " << a.calculate();
  return 0;
}