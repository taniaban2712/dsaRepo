#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        string s="";
        cin>>s;
        vector<int>v={0,0};
        int flag=0;
        for(int i=0;i<n;i++){
                if(s[i]=='U'||s[i]=='D'){
                    if(s[i]=='U') v[1]++;
                    else v[1]--;
                }
                else{
                    if(s[i]=='R') v[0]++;
                    else v[0]--;
                }
                if(v[0]==1&&v[1]==1){
                    flag=1;
                    break;
                }
                
            
            
        }
        if(flag==1) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}