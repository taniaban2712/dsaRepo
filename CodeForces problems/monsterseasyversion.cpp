#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>mon(n,0);
        for(int i=0;i<n;i++) cin>>mon[i];
        sort(mon.begin(),mon.end());
        int ans=0;
        vector<int>health(n,0);
        health[0]=1;
        for(int i=1;i<n;i++) health[i]=min(health[i]+1,mon[i]);
        for(int i=0;i<n;i++) ans+=mon[i]-health[i];
        cout<<ans<<endl;
    }
}