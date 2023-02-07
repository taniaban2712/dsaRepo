#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t{0};
    cin>>t;
    while(t--){
        int x{0},y{0},z{0};
        cin>>x>>y>>z;
        if((x+y+z)%6==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}