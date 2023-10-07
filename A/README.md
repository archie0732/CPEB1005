# A - How Much Does Daytona Cost?

## 題目
[題目連結點此](https://vjudge.net/contest/585165#problem)

## 題目意思



## 解題

 <strong>因為只有三種(a、b、c) 在排列

能得知總共只有3!種排法</strong>

>
>分別為:<br>
>*   `abc` `acb` <br>
>*   `bac` `bca`<br>
>*   `cab` `cba`<br>

所以將所有的樣本進行分析，得: <br>

1.  abc acb bac cba `能符合`<br>

1.  bac cab `不行`<br>

* 故直接用字串分析是否符合 <br><br>
EX:   <br>
if (string) a== "acb"           ==>print:Yes <br>
else (string) a=="cab"          ==>print:No  <br>


[完整code請點此](https://github.com/archue001/CPEB1005/blob/main/B%20-%20Short%20Sort.cpp) <br>



![](https://github.com/archue001/CPEB1005/blob/main/1499593276-2126423918_n.jpg)
<br>
```cpp
#include<iostream>


using namespace std ;




int main (){
    
int n =0,t=0;
int time=0;
cin>>time;

while (time--)
{

cin>> n>>t;
int k[1000]={};
bool f=false;
for(int i=0;i<n;i++){
    cin>>k[i];
    if(k[i]==t){
        f=1;
    }
}
if (f==1){
    cout<<"Yes"<<endl;

}
else {
    cout<<"No"<<endl;
}
}
return 0;
}
```
