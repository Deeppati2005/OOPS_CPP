#include <bits/stdc++.h>
using namespace std;
template <class T>
class Queue
{
  vector<T> v;

public:
  void enqueue(T n)
  {
    v.push_back(n);
  }

  T dequeue()
  {
    if (v.empty())
    {
      cout << "The queue is empty";
      return 0;
    }
    T x = v.front();
    v.erase(v.begin());
    return x;
  }
};
int main()
{
  Queue<int> s1;
  s1.enqueue(10);
  s1.enqueue(20);
  s1.enqueue(30);
  cout << s1.dequeue() << endl;
  cout << s1.dequeue() << endl;

  Queue<char> s2;
  s2.enqueue('A');
  s2.enqueue('E');
  s2.enqueue('C');
  cout << s2.dequeue() << endl;
  cout << s2.dequeue() << endl;
}