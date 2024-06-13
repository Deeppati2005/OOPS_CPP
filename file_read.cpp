// read alpha.txt
#include <bits/stdc++.h>
using namespace std;
int main()
{
  string ch;
  ifstream file;
  file.open("file.txt");
  while (getline(file, ch))
  {
    cout << ch;
  }
  file.close();
}