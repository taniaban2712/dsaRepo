#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	int x1,y1;
	cin>>x1>>y1;
	if(__gcd(x1,y1)==1){
		cout<<1<<endl;
		cout<<x1<<" "<<y1<<endl;
	}
	else{
		cout<<2<<endl;
		//if(x1>2&&y1>3) cout<<x1-2<<" "<<y1-3<<endl;
		cout<<1<<" "<<y1-1<<endl;
		cout<<x1<<" "<<y1<<endl;
	}
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