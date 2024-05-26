#include <bits/stdc++.h>
using namespace std;
template <class T>
class stk
{
  vector<T> v;

public:
  void push(T value)
  {
    v.push_back(value);
  }

  T pop()
  {
    if (v.empty())
    {
      cout << "The stack is empty";
      return 0;
    }
    T x = v.back();
    v.pop_back();
    return x;
  }
};
int main()
{
  stk<int> s1;
  s1.push(10);
  s1.push(20);
  s1.push(30);
  cout << s1.pop() << endl;
  cout << s1.pop() << endl;
  
  stk<char> s2;
  s2.push('A');
  s2.push('E');
  s2.push('C');
  cout << s2.pop() << endl;
  cout << s2.pop() << endl;
}