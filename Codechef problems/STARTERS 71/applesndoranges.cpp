#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t{0};
	cin>>t;
	while(t--){
	    int n{0},m{0}, p{0};
	    cin>>n>>m;
	    if(n%2==0&& m%2==0){
	        while(n>0){
                p++;
                n/=2;
	            m/=2;
	            if(m%2!=0||n>0){
	                p++;
	                break;
	            }
	        }
	    }
	    else{
	        p=1;
	    }
	    cout<<p<<endl;
	}
	return 0;
}
