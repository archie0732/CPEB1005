# A - How Much Does Daytona Cost?

## 題目
[題目連結點此](https://vjudge.net/contest/585165#problem)

## 題目意思

<br>
給一數列L，且給一數(a)，求a是否為這數列L中最常見的數字。

* L= 1 . 6 .3 . 7 .1;`a=1`
ANS=Yes
* L=2 .3 .5 .7  ;`a=9`
ANS=No


## 解題

> 1.把數列丟到陣列裡  <br>
> 2.去把陣列裡的直去跟a比是否相同 <br>
> 3.happy end  <br>
 
 
 <br>

[完整code請點此](https://github.com/archie0732/CPEB1005/blob/C---Aleksa-and-Stack/cpeA.cpp) <br>



![](https://github.com/archie0732/CPEB1005/blob/%E5%9C%96%E7%89%87/313420554_160285600025427_7959677222235469340_n.jpg)
<br>
```cpp
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
```
