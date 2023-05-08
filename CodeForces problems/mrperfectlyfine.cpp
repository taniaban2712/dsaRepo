#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
   ll n;
   cin>>n;
   ll totalskill=INT_MAX,skill1=INT_MAX,skill2=INT_MAX;
   while(n--){
      ll m;
      cin>>m;
      string s="";
      cin>>s;
      if(s[0]=='1'&&s[1]=='1') totalskill=min(totalskill,m);
      else{
         if(s[0]=='1') skill1=min(skill1,m);
         if(s[1]=='1') skill2=min(skill2,m);
      }
   }
   if((skill1==INT_MAX||skill2==INT_MAX)&&totalskill==INT_MAX) cout<<-1<<endl;
   else{
      cout<<min(skill2+skill1,totalskill)<<endl;
   }
   
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