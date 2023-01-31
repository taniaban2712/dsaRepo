#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0};
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int a{0};
            cin>>a;
            v.push_back(a);
        }
        vector<int>ans;
        vector<int>v2=v;
        sort(v2.begin(),v2.end());
        for(int i=0;i<n;i++){
            if(v[i]!=v2[n-1]){
                ans.push_back(v[i]-v2[n-1]);
            }
            else{
                ans.push_back(v[i]-v2[n-2]);
            }
        }
        for(auto it:ans){
            cout<<it<<" ";
        }
        cout<<" "<<endl;
    }
}