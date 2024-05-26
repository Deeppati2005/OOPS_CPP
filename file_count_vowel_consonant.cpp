#include <bits/stdc++.h>
using namespace std;

int main()
{
  ifstream file("deep.txt");
  if (!file.is_open())
  {
    cout << "Unable to open file deep.txt";
    return 1;
  }

  char ch;
  int vowels = 0, consonants = 0;

  while (file.get(ch))
  {
    ch = tolower(ch);
    if (isalpha(ch))
    {
      if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
      {
        vowels++;
      }
      else
      {
        consonants++;
      }
    }
  }

  file.close();

  cout << "Number of vowels: " << vowels << endl;
  cout << "Number of consonants: " << consonants << endl;

  return 0;
}
