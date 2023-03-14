#include<bits/stdc++.h>
using namespace std;
int main(){
    int n{0};
    cin>>n;
    int count{0};
    while(n>0){
        int dig=n%10;
        if(dig==7 || dig==4){
            count++;
        }
        else{
            continue;
        }
        n/=10;
    }
    if(count==4||count==7){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}