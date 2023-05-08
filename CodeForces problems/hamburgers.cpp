#include<bits/stdc++.h>
#define ll long long int
using namespace std;
//not done
void solve(){
	string recipe;
   cin>>recipe;
   ll nb,ns,nc,pb,ps,pc;
   ll money;
   cin>>nb>>ns>>nc;
   cin>>pb>>ps>>pc;
   cin>>money;
   unordered_map<char,int>quant;
   for(int i=0;i<n;i++){
      quant[recipe[i]]++;
   }
   ll bread=nb/quant['B'];
   ll sausage=ns/quant['S'];
   ll cheese=nc/quant['C'];
   ll sandwich=min(bread,sausage,cheese);
   

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