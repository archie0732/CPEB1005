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


