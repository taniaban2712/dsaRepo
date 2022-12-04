#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,a,b;
	    cin>>n>>a>>b;
	    int rounds=(log(n)/log(2));
	    int ans=rounds*a+(b*(rounds-1));
	    cout<<ans<<endl;;
	}
	return 0;
}
