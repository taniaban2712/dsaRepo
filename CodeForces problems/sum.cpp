#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t=0;
    cin>>t;
    while(t--){
        int a=0,b=0,c=0;
        cin>>a>>b>>c;
        if(a==(b+c)||b==(a+c)||c==(b+a)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}