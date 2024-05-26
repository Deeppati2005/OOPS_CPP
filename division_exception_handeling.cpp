#include <bits/stdc++.h>
using namespace std;
int main()
{
  try
  {
    int numerator = 10;
    int denominator = 0;
    if (denominator == 0)
    {
      throw runtime_error("Division by zero not allowed!");
    }
    int result = numerator / denominator;
    cout << "Result is : " << result << endl;
  }
  catch (exception &e)
  {
    cout << e.what() << endl;
  }
}

