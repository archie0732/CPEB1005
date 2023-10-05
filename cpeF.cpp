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