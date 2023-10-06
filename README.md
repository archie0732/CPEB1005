# F - Rigged! （WA版，AC版請見另一個）

<strong> <em> [AC版本](https://github.com/archie0732/CPEB1005/blob/C---Aleksa-and-Stack/cpeF2.cpp)      </strong></em>

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





[完整code請點此](https://github.com/archie0732/CPEB1005/blob/C---Aleksa-and-Stack/cpeF.cpp)  <br>

![](https://github.com/archue001/CPEB1005/blob/%E5%9C%96%E7%89%87/386320732_310791081710296_4375879779438103400_n.jpg)


<br>

## 目前仍卡在WA2 上 ，已放棄

請參考：
[ac版本](https://github.com/archie0732/CPEB1005/blob/C---Aleksa-and-Stack/cpeF2.cpp)

<br>
有空的各位忙找一下謝謝（已經被-7了）

```  cpp
               #include<iostream>


            using namespace std;

            int main ()  {

            int e[5000];
            long long  s[5000]={};
            int n=0,loser=-1,t=0;
            bool loseS=0,loseE=0;

            cin>>t;

            while (t--)
            {

            cin>>n;

            for(int i=0;i<n;i++){

                cin>>s[i]>>e[i];

            }

            //先比力量
            for(int i=1;i<n;i++){

            if(s[0]<=s[i]){
                loseS=1;
            } 
            if(s[0]>s[i]){// 對手只要力量輸==>他就不用比了(把它耐力歸零)
                e[i]=0;
            }
            }

            //再比耐力
            for(int i=1;i<n+1;i++){
                if(e[0]<=e[i]){
                    loseE=1;
                
                }
            }

            if((loseE==1) && (loseS==1)){
                cout<<loser<<endl;
            }else {
                cout<<s[0]<<endl;
            }


            loseE=0;
            loseS=0;

            }

            return 0;
                
            } 
   

```
