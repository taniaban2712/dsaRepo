#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0};
        long long int x=1e9;
        cin>>n;
        vector<long long int>v;
        for(int i=0;i<2*n;i++){
            long long int a{0};
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        
        for(int i=0;i<=n;i++){
            cout<<v[n+i-1]-v[i]<<endl;
            if(v[n+i-1]-v[i]<x){
                x=v[n+i-1]-v[i];
            }
        }
        cout<<x<<endl;
    }
}