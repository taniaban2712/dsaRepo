#include<bits/stdc++.h>
using namespace std;

#define int long long
signed main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0},type{0};
        cin>>n;
        if(n%3==1) type=1;
        else type=2;
        int sum=0;
        while(sum!=n){
            cout<<type;
            sum+=type;
            type=3-type;
        }
        cout<<'\n';
    }
}