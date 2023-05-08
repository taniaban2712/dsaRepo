#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;//not done
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n,0);
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        bool flag=false;
        ll start=1,end=n-1,ans=v[0],endans=0;

        while(start<end){
             if(endans>ans)
           {
            flag=true;
            break;
           }
            
           ans+=v[start];
           endans+=v[end];
           if(endans>ans)
           {
            flag=true;
            break;
           }
           start++,end--;
       }
        if(flag==true) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}