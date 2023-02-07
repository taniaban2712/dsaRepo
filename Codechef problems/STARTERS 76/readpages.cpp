#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t{0};
    cin>>t;
    while(t--){
        int n{0},x{0},y{0};
        cin>>n>>x>>y;
        if((x*y)>=n) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}