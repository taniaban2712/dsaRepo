#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){ 
        int n;
        cin>>n;
        vector<int>v(n,0);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>newvec=v;
        vector<int>ans;
        sort(newvec.begin(),newvec.end());
        for(int i=0;i<n;i++){
            if(v[i]==newvec[n-1]){
                ans.push_back(v[i]-newvec[n-2]);
            }
            else{
                ans.push_back(v[i]-newvec[n-1]);
            }
        }
        for(auto &it:ans) cout<<it<<" ";
        cout<<'\n';
    }
}