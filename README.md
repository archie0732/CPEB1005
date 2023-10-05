# B - Short Sort

## 題目
[題目連結點此](https://vjudge.net/contest/585165#problem/B)

## 題目意思
有 `a` `b` `c`三張牌<br>
#### 只能用以下方法交換牌:
`選兩張牌，交換位置`<br>
問:輸入abc (三個數隨機排列)<br>
能否只用一次就把牌換成abc

Ex:<br>
cba ==>yes
## 解題

 <strong>因為只有三種(a、b、c) 在排列

能得知總共只有3!種排法</strong>

分別為:<br>
*   `abc` `acb` <br>
*   `bac` `bca`<br>
*   `cab` `cba`<br>


  所以將所有的樣本進行分析，得:<br>
abc acb bac cba `能符合`<br>
bac cab `不行`<br>

故直接用字串分析是否符合:<br>
EX:<br>
if (string) a== "acb"           ==>print:Yes<br>
else (string) a=="cab"          ==>print:No<br>


[完整code請點此](https://github.com/archue001/CPEB1005/blob/main/B%20-%20Short%20Sort.cpp) <br>



![](https://github.com/archue001/CPEB1005/blob/main/1499593276-2126423918_n.jpg)
<br>
</p><code>
#include<iostream>
#include<stdio.h>// 沒什麼路用

// 2023 10  5  11:00

using namespace std ;

int main (){

int n;// author : dasabi    
cin>> n; 
string a;

while (n--)// while這裡不會真的要去打屁股
{
    
        
cin>> a;

// 3種字母排列 ，共3!種排法(總計6種排法)  整理如下( /oAo / )

/*
abc   ==> yes 
acb   ==> yes
bac   ==> yes
bca   ==> no
cab   ==> no
cba   ==> yes
*/
 

// 當然 你有本事能和在一個if 也行 ，這樣主要是方便閱讀


if(a=="abc"){// abc 
cout << "yes"<<endl;
}
else if(a=="acb"){//acb
cout<<"yes"<<endl;
}
else if(a=="bac"){//bac
    cout<<"yes"<<endl;
}
else if(a=="cba"){//cba
    cout<<"yes"<<endl;
}
<code></p>



