#include<iostream>
#include<stdio.h>// 沒什麼路用

// 2023 10  5  11:00
// total use time  8 min 
// 學長你好

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
else {// other
    cout<< "no"<<endl;
}
}
    return 0;
}// 請不要直接copy sumbit 謝謝 UWU 




