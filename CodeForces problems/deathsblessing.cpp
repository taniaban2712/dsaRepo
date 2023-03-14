#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll sumv1=0,sumv2=0;
        vector<ll>v1(n,0);
        vector<ll>v2(n,0);
        for(int i=0;i<n;i++){
            cin>>v1[i];
            sumv1+=v1[i];
        }
        for(int j=0;j<n;j++){
            cin>>v2[j];
            sumv2+=v2[j];
        }
        ll maxv2=*max_element(v2.begin(),v2.end());
        ll ans=sumv1+sumv2-maxv2;
        cout<<ans<<endl;
    }
}