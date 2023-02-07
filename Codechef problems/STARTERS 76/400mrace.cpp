#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int mini=INT_MAX;
        string ministr="";
        map<string,int>m={{"ALICE",0},{"BOB",0},{"CHARLIE",0}};
        for(auto &it:m){
            cin>>it.second;
            if(it.second<mini){
                mini=it.second;
                ministr=it.first;
            }
        }
        cout<<ministr<<endl;
    }
}