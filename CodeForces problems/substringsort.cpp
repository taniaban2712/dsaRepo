#include<bits/stdc++.h>
#define ll long long int
using namespace std;

bool compare(string s1, string s2){
    return s1.size()<s2.size();
}
void solve(){
	ll n;
    cin>>n;
    string v[n];
    for(int i=0;i<n;i++){
       cin>>v[i];
    }
    sort(v,v+n,compare);//sorting according to the size
    bool flag=1;
    for(int i=1;i<n;i++){
        //cout<<v[i]<<" "<<v[i-1]<<endl;
        if(v[i].find(v[i-1]) == string::npos){
            //cout<<"hello"<<endl;
            flag=0;//not a substring
            break;
        }
    }
    //cout<<flag<<endl;
    if(flag){
        cout<<"YES"<<endl;
        for(auto it:v) cout<<it<<endl;
            //cout<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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