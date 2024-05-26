#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v;
  v.push_back(1);
  v.push_back(2);
  v.pop_back();
  for (auto i = v.begin(); i != v.end(); i++)
  {
    cout << *i << endl;
  }
  cout << "Size : " << v.size();
  return 0;
}