#include<bits/stdc++.h>
using namespace std;

int main(){
    int t{0};
    cin>>t;
    while(t--){
        int d{0},l{0},r{0};
        cin>>d>>l>>r;
        if(d>=l && d<=r){
            cout<<"Take second dose now"<<endl;
        }  
        else if(d<l){
            cout<<"Too Early"<<endl;
        }     
        else{
            cout<<"Too Late"<<endl;
        }
    }
}