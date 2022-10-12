#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T=0;
	double floor1,floor2, speed1, speed2, time1, time2;
	for(int i=1;i<=T;i++){
	    cin>>floor1>>floor2>>speed1>>speed2;
	    time1=floor1/speed1;
	    time2=floor2/speed2;
	    if(time1<time2){
	        cout<<"chef"<<endl;
	    }
	    else if(time1>time2){
	        cout<<"chefina"<<endl;
	    }
	    else{
	        cout<<"both"<<endl;
	    }  
	}
	return 0;
}
