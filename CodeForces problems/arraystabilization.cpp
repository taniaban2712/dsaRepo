    #include<bits/stdc++.h>
    #define ll long long int
    using namespace std;
    int main(){
        ll n;
        cin>>n;
        vector<ll>v(n,0);
        for(ll i=0;i<n;i++) cin>>v[i];
        sort(v.begin(),v.end());
        if(n<3) cout<<"0"<<endl;
        else{
        ll m=v[n-2]-v[0];
        ll q=v[n-1]-v[1];
        cout<<min(m,q)<<endl;
        }
    }