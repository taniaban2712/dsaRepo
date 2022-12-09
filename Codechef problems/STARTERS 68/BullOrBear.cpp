#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x{0},y{0};
        cin>>x>>y;
        if(x>y){
            cout<<"Loss"<<endl;
        }
        else if(x<y){
            cout<<"Profit"<<endl;
        }
        else{
            cout<<"Neutral"<<endl;
        }
    }
}