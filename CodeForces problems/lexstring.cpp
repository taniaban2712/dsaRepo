#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
    ll n,m,k;
    cin>>n>>m>>k;
	string a,b;
    cin>>a>>b;
    //sorting the strings in descending order
    sort(a.begin(),a.end(),greater<char>());
    sort(b.begin(), b.end(),greater<char>());

    string c="";
    int ak=0,bk=0;
    bool f=false;
    while(!a.empty()&&!b.empty()){
        f=b.back()<a.back();//if the b has smaller character
        if(f==true &&bk==k) f=false;
        if(f==false && ak==k) f=true;

        if(f==true){
         c.push_back(b.back());
         bk++;
         ak=0;
         b.pop_back();
        }
        else{
            c.push_back(a.back());
            ak++;
            bk=0;
            a.pop_back();
        }
    }
    cout<<c<<"\n";
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