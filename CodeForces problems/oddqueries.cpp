#include<bits/stdc++.h>
#define ll long long int
using namespace std;
ll pref[200005],a[200005];

void solve(){	
    ll n,q;
    cin>>n>>q;
    for(int i=1;i<=n;i++){
      cin >> a[i];
      pref[i]=pref[i-1];
      pref[i]+=a[i];//prefix sum
    }
    for(int i = 0; i < q; i++){
      ll l,r,k;
      cin>>l>>r>>k;
      ll ans = pref[n]-(pref[r]-pref[l-1])+k*(r-l+1);
      if(ans%2==1){
          cout<<"YES"<<endl;
      }
      else{
          cout<<"NO"<<endl;
      }
    }  
}
 
 
int main()
{

  #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif


  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}