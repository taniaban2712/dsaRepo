#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s="";
        cin>>s;
        unordered_map<char,bool>even;
        unordered_map<char,bool>odd;
        bool flag=false;
        for(int i=0;i<n;i++){
            if(i%2==0){
                if(odd[s[i]]==true){
                    flag=true;
                    break;
                }
                else even[s[i]]=true;
                
            }
            else if(i%2==1){
                if(even[s[i]]==true){
                    flag=true;
                    break;
                }
                else odd[s[i]]=true;
            }
        }
        if(flag==true) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}