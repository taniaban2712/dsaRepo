/* There is a group of NNN friends who wish to enroll in a course together. The course has a maximum capacity of MMM students that can register for it. If there are KKK other students who have already enrolled in the course, determine if it will still be possible for all the NNN friends to do so or not.*/

#include <iostream>
using namespace std;
int main() {
	// your code goes here
	int N,M,K,T,rem{0};
	cin>>T;//entering test cases
	for(int i=1;i<=T;i++){
	    cin>>N>>M>>K;
	    rem=M-K;
	    if(rem>=N){
	        cout<<"Yes"<<endl;
	    }
	    else{
	        cout<<"No"<<endl;
	    }
	}
	return 0;
}
