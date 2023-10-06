# F - Rigged! AC version



## 題目
[題目連結點此](https://vjudge.net/contest/585165#problem/F)

## 題目意思

略

## 解題

略





[完整code請點此](https://github.com/archie0732/CPEB1005/blob/C---Aleksa-and-Stack/cpeF2.cpp) <br>



![](https://github.com/archie0732/CPEB1005/blob/%E5%9C%96%E7%89%87/heyhan-xiaocaoshen2.jpg)


<br>



<br>
有空的各位忙找一下謝謝（已經被-7了）

```  cpp
#include <bits/stdc++.h>
#define ll long long int
#define nline '\n'
using namespace std;

void solve()
{
    ll n;
    cin >> n;

    vector<pair<ll, ll>> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }

    bool canWin = true;

    for (int i = 1; i < n; i++)
    {
        if (arr[i].first >= arr[0].first and arr[i].second >= arr[0].second)
        {
            canWin = false;
        }
    }

    if (!canWin)
    {
        cout << -1 << nline;
    }
    else
        cout << arr[0].first << nline;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll T = 1;
    cin >> T;
    while (T--) 
    {
        solve();
    }
}

```
