#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        string s="";
        cin>>s;
        transform(s.begin(),s.end(),s.begin(),::toupper);
        if(s=="YES"){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}