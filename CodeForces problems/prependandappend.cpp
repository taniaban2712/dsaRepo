#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t=0;
    cin>>t;
    while(t--){
        int n=0,i=0,count=0;
        cin>>n;
        int j=n-1;
        string s="";
        cin>>s;
        while(i<j){
            if(s[i]==s[j]){
                break;
            }
            else{
                i++;
                j--;
            }
        }
        if(i>j) cout<<0<<endl;
        else{
            cout<<j-i+1<<endl;
        }
        
    }
}