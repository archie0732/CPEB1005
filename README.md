# F - Rigged! （以更正)

      

## 題目
[題目連結點此](https://vjudge.net/contest/585165#problem/F)

## 題目意思
將所有的選手（n位）的力量（s),耐力（e)做紀錄  <br>
比賽舉起w重量的物品的`次數最多`

>假如選手的s<w,那他一次也舉不起來
>假如選手的s>w,那他能舉起e次 <br>

<strong> 求在多少w下，第一位選手獲勝的機會最高（有複數答案）</strong> <br>
P.S: 如果沒有可能，傳-1

## 解題

<strong>思路</strong>
> 1. 只要有人的s>s0 && e>e0 則毫無勝算！
> 2. s0就算輸了要在`w<=a`時次數大於其他人就行(e0>e)





[完整code請點此](tinyurl.com/2fcpre6)  <br>

輪轉位移 <br>

![](https://github.com/archie0732/CPEB1005/blob/%E5%9C%96%E7%89%87/82d8d3c69d269cd6588e8172a43734ca.jpeg)


<br>




<br>


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
