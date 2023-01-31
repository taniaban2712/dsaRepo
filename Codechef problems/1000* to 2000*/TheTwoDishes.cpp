#include<bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0}, s{0};
        cin>>n>>s;
        if(n>s){
            cout<<s<<endl;
        }
        else if(n<s){
            s=s-n;
            cout<<s<<endl;
        }
        else{
            cout<<s<<endl;
        }
    }
}