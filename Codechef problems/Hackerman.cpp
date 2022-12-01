#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a, b, flag{0};
        cin>>a>>b;
        int sum=a+b;
        for(int i=2;i<sum;i++){
            if(sum%i==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"ALICE"<<endl;
        }
        else{
            cout<<"BOB"<<endl;
        }
    }
}