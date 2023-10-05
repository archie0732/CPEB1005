# B - Short Sort


因為只有三種(a、b、c) 在排列

總共只有3!種樣式 

分別為
abc acb 
bac bca
cab cba


所以將所有的樣本進行分析，得:
abc acb bac cba 能符合
bac cab 不行

故直接用字串分析是否符合:
EX:
if (string) a== "acb" ==>Yes
else (string) a=="cab"==>No


完整請見B - Short Sort.cpp

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
