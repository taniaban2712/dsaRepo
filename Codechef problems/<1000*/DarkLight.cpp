#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n{0},k{0};
        cin>>n>>k;
        if(n%4==0){
            if(k==1){
                cout<<"ON"<<endl;
            }
            else{
                cout<<"OFF"<<endl;
            }
        }
        else{
            if(k==1){
                cout<<"AMBIGUOUS"<<endl;
            }
            else{
                cout<<"ON"<<endl;
            }
        }
    }
}