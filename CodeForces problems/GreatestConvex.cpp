#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int k{0},flag{0},num{0};
        cin>>k;
        for(int i=k-1;i>0;i--){
            if(((i+1)*fact(i-1))%k==0){
               num=i; 
               flag=1;
               break;
            }
        }
        if(flag==0){
            num=-1;
        }
        cout<<num<<endl;
    }
}