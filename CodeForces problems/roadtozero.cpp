#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve(){
	ll x,y;
   cin>>x>>y;
   ll a,b;
   cin>>a>>b;
   //a is individually
   //b is both
   ll case1,case2,ans;
   if(x>0&&y>0){
      case1=abs(x-y)*a+min(x,y)*b;
      case2=(x+y)*a;
   }
   else if(x<0&&y<0){
      case1=min(abs(x),abs(y))*b+abs(x-y)*a;
      case2=abs(x+y)*a;
   }
   else{
      case1=(abs(x)+abs(y))*a;
      case2=min(abs(x),abs(y))*b+(max(abs(x),abs(y))+min(abs(x),abs(y)))*a;
   }
   ans=min(case1,case2);
   cout<<ans<<endl;
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