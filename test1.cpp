#include <iostream>
#include <string>
using namespace std;

int main() {
  char name[50];
  string address;

  cout << "Enter your name: ";
  cin.getline(name, 50);

  cout << "Enter your address: ";
  getline(cin, address);

  cout << "Name: " << name << endl;
  cout << "Address: " << address << endl;

  return 0;
}