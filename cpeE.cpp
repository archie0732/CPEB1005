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