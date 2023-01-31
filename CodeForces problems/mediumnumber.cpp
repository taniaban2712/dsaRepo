#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        vector<int>v;
        for(int i=0;i<3;i++){
            int a{0};
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(),v.end());
        cout<<v[1]<<endl;
    }
}