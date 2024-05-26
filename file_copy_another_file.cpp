#include <iostream>
#include <fstream>
using namespace std;
int main()
{
  ifstream infile;
  ofstream onfile;
  char str;
  infile.open("file.txt");
  onfile.open("file2.txt");
  while (infile.get(str))
  {
    onfile.put(str);
  }
  cout << "Copied";
  onfile.close();
  infile.close();
}