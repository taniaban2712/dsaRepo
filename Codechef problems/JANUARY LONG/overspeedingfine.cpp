#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int x{0};
        cin>>x;
        if(x<=70){
            cout<<0<<endl;
        }
        else if(x>70&&x<=100){
            cout<<500<<endl;
        }
        else{
            cout<<2000<<endl;
        }
    }
}