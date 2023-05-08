#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	vector<vector<int>>v(n,0);
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    vector<int>np;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            np[m*i+j]=v[i][j];
        }
    }
    //binary search
    
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