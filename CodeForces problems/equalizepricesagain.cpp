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
        sort(v.begin(),v.end());
        if((n-1)%2==0){
            cout<<v[(n-1)/2]<<endl;
        }
        else{
            cout<<min(v[(n-1)/2],v[(n+1)/2])<<endl;
        }
    }

}