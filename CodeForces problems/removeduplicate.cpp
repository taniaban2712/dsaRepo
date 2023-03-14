#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v(n,0);
    vector<int>newvec;
    for(int i=0;i<n;i++) cin>>v[i];
    unordered_map<int, bool>m;
    for(int i=n-1;i>=0;i--){
        if(m[v[i]]==true) continue;
        else{
            newvec.push_back(v[i]);
            m[v[i]]=true;
        }
    }
    reverse(newvec.begin(),newvec.end());
    cout<<newvec.size()<<endl;
    for(auto &it:newvec) cout<<it<<" ";
    cout<<" "<<endl;
}