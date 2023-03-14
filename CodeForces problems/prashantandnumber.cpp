#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        vector<int>v(3,0);
        cin>>v[0]>>v[1]>>v[2];
        sort(v.begin(),v.end());
        cout<<v[1]<<endl;
    }
}