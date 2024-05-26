#include <iostream>
using namespace std;
class atm
{
private:
  long long Accountno;
  int balance;

public:
  atm()
  {
    Accountno = 8451515485;
    balance = 1000;
  }
  void Deposit(double amount)
  {
    balance = balance + amount;
    cout << "Deposited " << amount << " successfully." << endl;
  }
  void withdraw(double amount)
  {
    if (amount > balance)
    {
      cout << "Insufficient balance." << endl;
    }
    else
    {
      balance = balance - amount;
      cout << "Withdrawn" << amount << " successfully." << endl;
    }
  }
  void balence()
  {
    cout << "Current Balance: " << balance << endl;
  }
};
int main()
{
  atm at;
  int choice;
  double amount;
  cout << "Enter the choice=>"
       << "\n"
       << " 1.Deposit 2.Wihdraw 3. Balence 4. exit : " << endl;
  cin >> choice;
  switch (choice)
  {
  case 1:
    cout << "Enter amount to deposit: " << endl;
    cin >> amount;
    at.Deposit(amount);
    at.balence();
    break;

  case 2:
    cout << "Enter amount to withdraw: " << endl;
    cin >> amount;
    at.withdraw(amount);
    at.balence();
    break;

  case 3:
    at.balence();
    break;
  case 4:
    exit(4);
    break;

  default:
    break;
  }
}