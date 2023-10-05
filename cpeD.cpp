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