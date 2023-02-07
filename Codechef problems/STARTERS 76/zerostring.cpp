#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t{0};
    cin>>t;
    while(t--){
        string s="";
        int n{0},count0{0},count1{0};
        cin>>n;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='1') count1++;
            else count0++;
        }
        if(count0==n) cout<<"0"<<endl;
        else if(count1==n) cout<<"1"<<endl;
        else{
            cout<<n-min(count0,count1)<<endl;
        }
    }
}