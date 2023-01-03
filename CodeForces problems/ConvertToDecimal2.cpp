#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int x{0},bin{0},dec{0};
        cin>>x;
        while(x>0){
            bin=bin*10+(x%2);
            x/=2;
        }
        cout<<bin<<endl;
    }
}