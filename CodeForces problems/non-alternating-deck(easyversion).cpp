#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int alice=1, bob=0;
        int n;
        cin>>n;
        n--;
        int i=1;
        int f=0;
        while(n>0){
            i++;
            if(f<2) bob+=min(n,i);
            if(f>=2&&f<4) alice+=min(n,i);
            if(f==3) f=0;
            else f++;
            n-=i;
            //cout<<n<<" "<<alice<<" "<<bob<<endl;
            
        }
        cout<<alice<<" "<<bob<<endl;
    }
}