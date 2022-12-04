/*Chef's dog binary hears frequencies starting from 676767 Hertz to 450004500045000 Hertz (both inclusive).

If Chef's commands have a frequency of XXX Hertz, find whether binary can hear them or not.*/



#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int T=0;
	int X=0;
	cin>>T;
	for(int i=1;i<=T;i++){
	    cin>>X;
	    if(X>=67 && X<=45000){
	        cout<<"yes"<<endl;
	    }
	    else{
	        cout<<"no"<<endl;
	    }
	}
	return 0;
}
