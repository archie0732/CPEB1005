#include <iostream>

using namespace std;

int main()
{

  int n = 0, t = 0;
  int time = 0;
  cin >> time;

  while (time--)
  {

    cin >> n >> t;
    int k[1000] = {};
    bool f = false;
    for (int i = 0; i < n; i++)
    {
      cin >> k[i];
      if (k[i] == t)
      {
        f = 1;
      }
    }
    if (f == 1)
    {
      cout << "Yes" << endl;
    }
    else
    {
      cout << "No" << endl;
    }
  }
  return 0;
}
