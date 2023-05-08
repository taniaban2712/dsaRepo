#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll k,n,m;
	cin>>k>>n>>m;
	vector<ll>a(n,0),b(m,0);
	for(int i=0;i<n;i++) cin>>a[i];
	for(int i=0;i<m;i++) cin>>b[i];
	ll i=0,j=0,flag=0;
    vector<ll>ans;
    while(i<n||j<m){
    	//firstly the a vector is traversed and the possible arrangement is made
    	if(i<n&&a[i]==0){
    		ans.push_back(a[i]);
    		k++;//increasing the length of the file
    		i++;
    	}
    	else if(i<n&a[i]!=0&a[i]<=k){
    		ans.push_back(a[i]);
    		i++;
    	}
    	//then the b vector is traversed and the decision made.
    	else if(j<m&&b[j]==0){
    		ans.push_back(b[j]);
    		k++;
    		j++;
    	}
    	else if(j<m&&b[j]!=0&&b[j]<=k){
    		ans.push_back(b[j]);
    		j++;
    	}
    	//if at any point the index exceeds the size of the file
    	else{
    		flag=1; 
    		break;
    	}
    }
    if(flag==0){
    	for(auto it:ans) cout<<it<<" ";
    		cout<<endl;
    }
    else cout<<-1<<endl;
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