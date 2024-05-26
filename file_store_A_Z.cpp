// store A to Z in alpha.text
#include <bits/stdc++.h>
using namespace std;
int main()
{
  ofstream outf("alpha.txt");
  for (char c = 'A'; c <= 'Z'; c++)
  {
    outf << c << " ";
  }
}