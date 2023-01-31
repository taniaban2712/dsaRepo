#include<bits/stdc++.h>
using namespace std;

#define int long long
signed main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0};
        cin>>n;
        map<int,int>m;
        while(n>0){
            if(n-2>0){
                n-=2;
                m[2]++;
            }
            else{
                n-=1;
                m[1]++;
            }
        }
    }
}