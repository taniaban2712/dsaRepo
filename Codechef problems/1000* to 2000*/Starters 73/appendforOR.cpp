#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t{0};
	cin>>t;
	while(t--){
	    int n{0},y{0}, ref{0};
	    cin>>n>>y;
	    vector<int>arr;
	    for(int i=0;i<n;i++){
	        int num{0};
            cin>>num;
            arr.push_back(num);
	    }
	    ref=arr[0];
	    for(int i=1;i<n;i++){
	        ref=(ref|arr[i]);
	    }
	    int x=y-ref;
        if((x&y)==x){
            cout<<x<<endl;
        }
        else{
            cout<<-1<<endl;
        }
	return 0;
    }
}
