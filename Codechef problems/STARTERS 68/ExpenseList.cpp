#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n{0},x{0},exp{0};
        cin>>n>>x;
        exp=pow(2,x);
        while(n>0){
            exp/=2;
            n--;
        }
        cout<<exp<<endl;
    }
}