#include <iostream>
using namespace std;

class Employee
{
private:
  int Empcode;
  int Basicsalary;

public:
  int salary(int ec, int bs)
  {
    Empcode = ec;
    Basicsalary = bs;
  }
  float calculate()
  {
    float DA = 1.74 * Basicsalary;
    float HRA = 0.1 * Basicsalary;
    float TA = 500;
    float IncomeTax = (Basicsalary > 50000) ? 0.05 * Basicsalary : 0;
    float NetSalary = Basicsalary + DA + HRA + TA - IncomeTax;
    return NetSalary;
  }
  void display()
  {
    cout << "Employee Code: " << Empcode << endl;
    cout << "Basic Salary: " << Basicsalary << endl;
    cout << "Net Salary: " << calculate() << endl;
  }
};
int main()
{
  Employee emp;
  int ec, bs;
  cout << "Enter Employee Code: ";
  cin >> ec;
  cout << "Enter Basic Salary: ";
  cin >> bs;
  emp.salary(ec, bs);
  emp.calculate();
  emp.display();
}