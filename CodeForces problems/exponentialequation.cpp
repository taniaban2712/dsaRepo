#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n%2==0){
            cout<<1<<" "<<n/2<<endl;
        }
        else cout<<-1<<endl;
    }

}