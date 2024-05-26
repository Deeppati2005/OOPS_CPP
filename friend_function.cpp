#include <bits/stdc++.h>
using namespace std;
class monu;
class deep
{
private:
  int money = 100;
  friend void nandy(deep d, monu p);
};
class monu
{
private:
  int money = 200;
  friend void nandy(deep d, monu p);
};

void nandy(deep d, monu p)
{
  cout << "Sum of money: " << d.money + p.money << endl;
}

int main()
{
  deep d1;
  monu p1;
  nandy(d1, p1);
  return 0;
}