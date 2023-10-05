# D - Good Kid

## 題目
[題目連結點此](https://vjudge.net/contest/585165#problem/D)

## 題目意思

給一串數字，並可以令其中一數`+1` <br>
求所有數的`乘積` `最大值`

### ex: <br>
* 0 1 2 3    ==> 把`0` `+1`能得出最大值(6) <br>
* 2 1 2 2    ==> 把`1` `+1`能得出最大值(16) <br>


## 解題

### 暴力解==>每個數都加加看，再分別比較大小:

* 0 1 2 3
> 1. (0+1)  ==>得`6`
> 2. (1+1)  ==>得`0`
> 3. (2+1)  ==>得`0`
> 4. (3+1)  ==>得`0` <br>

<br>
<strong> 故得 max值 6 </strong>
<br>
<br>


[完整code請點此](https://github.com/archue001/CPEB1005/blob/C---Aleksa-and-Stack/cpeD.cpp)   <br>

![](https://github.com/archue001/CPEB1005/blob/%E5%9C%96%E7%89%87/JKaIC8A.jpg)

<br>

```  cpp
  #include<iostream>


using namespace std;


int main () {

int n=0,p=1,tem=0,ans=0,t=0;
int b[50000]={};

cin>>t;
while (t--)
{

cin>> n;
for(int i=0;i<n;i++){
    cin>>b[i];
}

for(int i=0;i<n;i++){
    tem=b[i];
    b[i]=b[i]+1;
    for(int j=0;j<n;j++){
        p=p*b[j];
   
    }
    if(ans<p){
        ans=p;
    }
    p=1;
    b[i]=tem;
}
cout<<ans<<endl;
ans=0;
}

return 0;

}
```
