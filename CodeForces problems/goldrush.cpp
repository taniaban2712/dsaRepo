#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool iscond(int n,int m){
   if(n==m) return true;
   else if(n%3!=0) return false;
   //calling the function recursively such that each part of the pile is meeting the condition and how many piles we will get.
   else return (iscond(n/3,m)||iscond(2*n/3,m));
}

void solve(){
   ll num,m;
   cin>>num>>m;
   if(iscond(num,m)) cout<<"YES"<<endl;
   else cout<<"NO"<<endl;
}

int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll q;
    cin>>q;
    while(q--){
    	solve();
    }
}