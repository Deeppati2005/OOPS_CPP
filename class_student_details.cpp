#include <bits/stdc++.h>
using namespace std;
class student
{
  int roll, marks;
  char name[20];

public:
  void input()
  {
    cout << "\n Enter Roll: ";
    cin >> roll;
    fflush(stdin);
    cout << "\n Enter Name: ";
    cin.getline(name, 20);
    cout << "\n Enter Marks: ";
    cin >> marks;
  }
  void output()
  {
    cout << "\n Roll: " << roll << "\n Name: " << name << "\n Marks: " << marks;
  }

  int getRoll()
  {
    return roll;
  }

  int getMarks()
  {
    return marks;
  }
};

void search(student s[], int n, int roll)
{
  for (int i = 0; i < n; i++)
  {
    if (s[i].getRoll() == roll)
    {
      cout << "\n Student Found: ";
      s[i].output();
      return;
    }
  }
  cout << "The roll no. not found";
}

void display(student s[], int n)
{
  student topper = s[0];
  for (int i = 1; i < n; i++)
  {
    if (s[i].getMarks() > topper.getMarks())
    {
      topper = s[i];
    }
  }
  cout << "\n Topper Details:\n";
  topper.output();
}

int main()
{
  student s[2];
  for (int i = 0; i < 2; i++)
  {
    cout << " Student " << i + 1 << ":";
    s[i].input();
  }

  int choice;
  cout << "\n1...Search by Roll No. \n2...Display the Topper Details : " << endl;
  cout << "\n Enter your choice : ";
  cin >> choice;
  switch (choice)
  {
  case 1:
    int roll;
    cout << "\n Enter Roll No.: ";
    cin >> roll;
    search(s, 2, roll);
    break;
  case 2:
    display(s, 2);
    break;
  default:
    cout << "Invalid choice!";
  }
  return 0;
}