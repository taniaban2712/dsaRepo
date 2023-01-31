#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        vector<int>v;
        int n{0};
        cin>>n;
        for(int i=0;i<n;i++){
            int a{0};
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        int mini=INT_MIN,maxi=INT_MAX;
        for(int i=0;i<n;i++){
            if(v[i]<0&&v[i]>mini){
                mini=v[i];
            }
            else if(v[i]>0&&v[i]<maxi){
                maxi=v[i];
            }
        }
        int ans=max(abs(mini),maxi);
        cout<<ans<<endl;
    }
}