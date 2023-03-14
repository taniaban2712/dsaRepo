#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n,counttwo=0,countone=0;
        cin>>n;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]==2) counttwo++;
            else countone++;
        }
        if(counttwo==0) cout<<1<<endl;
        else if(counttwo%2==1) cout<<-1<<endl;
        else{
            bool flag=false;
            int newt=counttwo, index=0;
            for(int i=0;i<n;i++){
                
                if(counttwo==newt/2){
                    index=i;
                    //flag=true;
                    break;
                }
                if(v[i]==2) counttwo--;
                //cout<<counttwo<<" ";
                
            }
            //cout<<" "<<endl;
            cout<<index<<endl;
            //if (flag==true)
           
        }
    }
}