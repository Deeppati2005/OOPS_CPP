#include <bits/stdc++.h>
using namespace std;
int main()
{
  ifstream infile;
  ofstream onfile;
  char ch;
  string str;
  infile.open("file.txt");
  onfile.open("file_upper.txt");
  while (infile.get(ch))
  {
    onfile.put(toupper(ch));
  }
  onfile.close();
  infile.close();
}