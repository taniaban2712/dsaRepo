#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n,d;
    cin>>n>>d;
    string num,ans="";
    cin>>num;
    ll ind=0,minind=INT_MAX;
    bool flag=false;
    if(d==0) ans=num+'0';
    else{
        for(int i=0;i<n;i++){
            if(num[i]-'0'<d){
                ind=i;
                //cout<<num[i]-'0'<<endl;
                break;
            }
        }
        if(ind==0){
            if(num[0]-'0'<d) ans=to_string(d)+num;
            else ans=num+to_string(d);
        } 
        else{
            for(int i=0;i<n;i++){
            if(i==ind){
                ans+=to_string(d);
                ans+=num[i];
            }
            else ans+=num[i];
          }
        }
    }
    cout<<ans<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin>>t;
    while(t--){
    solve();
    }
}