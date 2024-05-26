#include <bits/stdc++.h>
using namespace std;
int main()
{
  int del = remove("C://Users//deepp//OneDrive//Desktop//ami.txt");
  if (del == 0)
  {
    cout << "File is deleted";
  }
  else
  {
    cout << "File is not deleted";
  }
}