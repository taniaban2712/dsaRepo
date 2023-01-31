#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t{0};
	cin>>t;
	while(t--){
	    int num{0},x{0},y{0};
	    cin>>x>>y;
        if(x==1&&y==1){
            cout<<1<<endl;
        }
	    for(int i=1;;i++){
	        int n=(i*y)-x;
	        if((n+y)%x==0){
	            num=n;
	            break;
	        }
	    }
	    cout<<num<<endl;
	}
	return 0;
}
