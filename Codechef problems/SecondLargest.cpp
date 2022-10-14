/*Three numbers A, B and C are the inputs. Write a program to find second largest among them. */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,A,B,C;
	cin>>T;
	for(int i=1;i<=T;i++){
        cin>>A>>B>>C;
	    if(A>B){
	        if(B>C){
	            cout<<B<<endl;;
	        }
	        else{
	            cout<<C<<endl;
	        }
	    }
	    else{
	        if(A>C){
	            cout<<A<<endl;
	        }
	        else{
	            cout<<C<<endl;
	        }
	    }
	}
}
