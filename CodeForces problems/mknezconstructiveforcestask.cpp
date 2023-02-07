#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t=0;
    cin>>t;
    while(t--){
        int n=0;
        cin>>n;
        if(n%2==0){
            cout<<"YES"<<endl;
            for(int i=0;i<n;i++){
                if(i%2==0) cout<<-1<<" ";
                else cout<<1<<" ";
            }
            cout<<" "<<endl;
        } 
        else if(n>=5){
            cout<<"YES"<<endl;
            int k=(n-1)/2;
            for(int i=0;i<n;i++){
                if(i%2==0) cout<<k-1<<" ";
                else cout<<-k<<" ";
            }
            cout<<" "<<endl;
        }
        else cout<<"NO"<<endl;

    }
}