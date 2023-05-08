#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n;
	cin>>n;
	string s="",w="";
	cin>>s;
	//for the smallest character
	char ch=*min_element(s.begin(), s.end());
	w+=ch;
	int ind=0;//for finding out the index of the string
	for(int i=n-1;i>=0;i--){
		if(s[i]==ch){
			ind=i;
			break;
		}
	}
	for(int i=0;i<n;i++){
		if(i==ind) continue;
		w+=s[i];
	}
	cout<<w<<endl;
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