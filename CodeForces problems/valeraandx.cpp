#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
	cin>>n;
	vector<vector<char>>v(n,vector<char>(n,' '));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>v[i][j];
		}
	}
	bool flagdiag=false, flagother=false;
	int diag=v[0][0], other=v[1][0];
	if(diag==other){
		flagdiag=flagother=true;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			//cout<<v[i][j]<<" ";
			if(i==j||(i+j)==n-1){
				if(v[i][j]!=diag){
					flagdiag=true;
					break;
				}
			}
			else{
				if(v[i][j]!=other){
					flagother=true;
					break;
				}
			}
		}
		//cout<<" "<<endl;
	}
	if(flagdiag==true||flagother==true) cout<<"NO"<<endl;
	else cout<<"YES"<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
   
    //ll t;
    //cin>>t;
    //while(t--){
    solve();
    //}
}