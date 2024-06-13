// store A to Z in alpha.text
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ofstream file;
  file.open("alpha.txt");
  for (char c = 'A'; c <= 'Z'; c++)
  {
    file << c << " ";
  }
}