#include<iostream>
#include<cmath>
using namespace std;

int recur(int n){
    if(n==0){
        return 0;
    }
    n=floor(n/2);
    
    return recur(n);
}
int main(){
    int n=0;
    cout<<"Enter any number:"<<endl;
    cin>>n;
    cout<<recur(n)<<endl;
}