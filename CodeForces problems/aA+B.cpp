#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        string s="";
        cin>>s;
        int a=int(s[0])-48;
        int b=int(s[2])-48;
        cout<<a+b<<endl;
    }
}