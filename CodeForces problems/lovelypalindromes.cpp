#include<bits/stdc++.h>

#define ll long long int
using namespace std;
void solve(){
	string n;
	cin>>n;
    string nrev=string(n.rbegin(),n.rend());//reversing the string
    cout<<n+nrev<<endl;
}
int main(){

	#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    //ll q;
    //cin>>q;
    //while(q--){
    	solve();
    //}
}