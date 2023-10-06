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

## 沒有阻礙(相同) 則依序遞增
like : a=3 .4 .5 .6 <br>
b= 1 . 2 . 3. 4

### 假如同項且數字相同則再多+1:

>EX: a= 1 . 4  .3 . 5  <br>
>b= (1+1) .3 .4. （5+1） <br>
>b=  2 . 3 . 4  . 5 <br>

<br>

### 得 b(max) = 5




[完整code請點此](https://github.com/archue001/CPEB1005/blob/C---Aleksa-and-Stack/cpeE.cpp)   <br>

![](https://github.com/archue001/CPEB1005/blob/%E5%9C%96%E7%89%87/9822b8d476b9c35124db5364d017cc21808acf81.jpg)


<br>

```  cpp
   #include<iostream>


using namespace std ;

int main () {
int a[5000]={};int b[5000]={};
int t=0,n=0,ans=0;

cin>>t;



while(t--){



cin>>n;
for(int i=0;i<n;i++){

    cin>>a[i];

}

b[0]=1;
if(b[0]==a[0]){
    b[0]=2;
}


for(int i=1;i<n+1;i++){

    b[i]=b[i-1]+1;

    if(b[i]==a[i]){
        b[i]++;
    }
    ans=b[n-1];
}

cout<<ans<<endl;

ans=0;

for(int i=0;i<n;i++){
    b[i]=0;
}

}


return 0;

}
```
