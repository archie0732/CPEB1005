# A - How Much Does Daytona Cost?

## 題目
[題目連結點此](https://vjudge.net/contest/585165#problem)

## 題目意思

<br>
<br>


## 解題

 <br>
 <br>

[完整code請點此](https://github.com/archie0732/CPEB1005/blob/C---Aleksa-and-Stack/cpeA.cpp) <br>



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
