# C-Aleksa and Stack

## 題目
[題目連結點此]([https://vjudge.net/contest/585165#problem/B](https://vjudge.net/contest/585165#problem/C))

## 題目意思

要求一串數列(n個，且`遞增`) <br>
且在`a2以後的數字*3` `*3`不得被前兩數的和`整除`<br><br>

ex: <br>
* `n=4` 1 . 2 . 5 . 6 ==> (O)   ``3*5 % (1+2) != 0;`` 且 ``6*3 % (2+5) != 0;``
* `n=4` 1 . 2 . 3 . 4 ==> (X)   ``3*3 % (1+2) == 0``


## 解題

### 最直接暴力解==>找一個數列符合條件:

>1 . 3 . 5 . 7 . 9........n <br>



[完整code請點此](https://github.com/archue001/CPEB1005/blob/C---Aleksa-and-Stack/cpeC.cpp)   <br>




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
