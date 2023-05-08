#include<bits/stdc++.h>
#define ll long long int
using namespace std;

/*bool ispalin(string s){
   if(string(s.rbegin(),s.rend())==s) return true;
   return false;
}*/

void solve(){
   ll n;
   cin>>n;
   string str;
   cin>>str;
	//if(ispalin(str)) cout<<"YES"<<endl;
   //else{
      ll start=0;
      ll end=str.size()-1;
      bool flag=true;
      while(start<=end){
         ll dist=abs(str[start]-str[end]);
         //cout<<abs(int(str[start])-int(str[end]))<<endl;
         if(dist>2||dist%2==1){
            flag=false;
            //cout<<flag;
            break;
         }
         start++;
         end--;
      }
      if(flag) cout<<"YES"<<endl;
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