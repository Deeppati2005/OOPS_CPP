#include <bits/stdc++.h>
using namespace std;
void deposit()
{
  double bal = 1000.0;
  double amt;
  cout << "Enter deposit amount: ";
  cin >> amt;
  if (amt <= 0)
  {
    throw invalid_argument("Invalid Deposit amount");
  }
  bal = bal + amt;
  cout << "New balance: " << bal << endl;
}
void withdraw()
{
  double bal = 1000.0;
  double amt;
  cout << "Enter withdraw amount: ";
  cin >> amt;
  if (amt <= 0)
  {
    throw invalid_argument("Invalid Deposit amount");
  }
  if (amt > bal)
  {
    throw runtime_error("Insufficient balance");
  }
  bal = bal - amt;
  cout << "New balance: " << bal << endl;
}

int main()
{
  try
  {
    deposit();
    withdraw();
  }
  catch (exception &e)
  {
    cout << e.what() << endl;
  }
}