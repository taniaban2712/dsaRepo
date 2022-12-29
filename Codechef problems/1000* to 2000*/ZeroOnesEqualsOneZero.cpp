#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        string s="";
        cin>>n;
        while(n>0){
              if(n%2==0){
                s+="10";
              }
              else{
                s+="0";
              }
            n-=2;
        }
        cout<<s<<endl;
        }
}