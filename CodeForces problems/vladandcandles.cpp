#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t{0};
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        if(n==1){
            int a=0;
            cin>>a;
            if(a>1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
        else{
            vector<int>v(n);
            for(int i=0;i<n;i++){
                cin>>v[i];
            }
            sort(v.begin(),v.end());
            if((v[n-1]-v[n-2])>1) cout<<"NO"<<endl;
            else cout<<"YES"<<endl;
        }
    }
}