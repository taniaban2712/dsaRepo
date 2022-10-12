#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T=0;
	int N=0;
	int X=0;
	int p=0;
	int rem=0;
	cin>>T;
	for(int i=1;i<=T;i++){
	    cin>>N;//number of friends
	    cin>>X;//number of slices
	    p=N*X;
	    if(p%4==0){
	        cout<<(p/4)<<endl;
	    }
	    else{
	        rem=p%4;
	        p+=(4-rem);
	        cout<<(p/4)<<endl;
	    }
	    p=0;
	    
	}
	return 0;
}
