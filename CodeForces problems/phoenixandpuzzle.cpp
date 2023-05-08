#include<bits/stdc++.h>
#define ll long long int
using namespace std;

ll perfect(ll n)
{
    ll x=sqrt(n);
    if(x*x==n)
        return 1;
    return 0;
}

void solve(){
	    ll n;
        cin>>n;
        ll k=log2(n);
        if(n%2==0){
            if(pow(2,k)==n)
                cout<<"YES"<<endl;
            else if(perfect(n/2)==1 ||n%4==0 && perfect(n/4)==1)
                cout<<"YES"<<endl;
            else cout<<"NO"<<endl;
        }
        else cout<<"NO"<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin>>t;
    while(t--){
      solve();
    }
}