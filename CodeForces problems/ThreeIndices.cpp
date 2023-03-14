#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<int>v(n,0);
        bool flag=false;
        for(int i=0;i<n;i++) cin>>v[i];
        int i=0;
        for(i=1;i<n-1;i++){
            if(v[i]>v[i-1]&&v[i]>v[i+1]){
                flag=true;
                break;
            }
        }
        if(flag==true){
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1<<" "<<i+2<<endl;
        }
        else  cout<<"NO"<<endl;
    }
}