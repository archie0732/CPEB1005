# E - Increasing Sequence

## 題目
[題目連結點此](https://vjudge.net/contest/585165#problem/E)
<br>
## 題目意思
<strong> 輸入一串數字`a`(共n個) </strong> <br>
`b數列要滿足以下條件` <br>
> 1. 遞增
> 2. `b(第n項)` 不能等於 `a(第n項)`
> 3. b是正整數 <br>

<br>
<strong>求b(最末項/第n項) 的 <em>最小值</em></strong>

## 解題

## 沒有阻礙(相同) 見依序遞增
like : a=2 .3 .4 .6 <br>
b= 5 . 6 . 7. 8

### 假如同項且數字相同則再多+1:

>EX: a= 1 . 4  .3 . 6  <br>
>b= (1+1) .(2+1) .(3+1) (4+1) <br>
>b=  2 . 3 . 4  . 5 <br>

<br>

### 得 b(max) = 5




[完整code請點此](https://github.com/archue001/CPEB1005/blob/C---Aleksa-and-Stack/cpeE.cpp)   <br>

![](https://github.com/archue001/CPEB1005/blob/%E5%9C%96%E7%89%87/386320732_310791081710296_4375879779438103400_n.jpg)


<br>

```  cpp
    #include<iostream>


    using namespace std ;


    int main ()  {

    int t=0,n=0;
    int k=1;


    cin>>t;
    while (t--)
    {
        cin>>n;
        for(int i=0;i<n;i++){
            cout<<k<<" ";
            k=k+2;
        }
        
    }
    cout<< endl;
    return 0;



    }
```
