#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a{0},c{0}, b{0},flag{0};
        cin>>a>>c;
        for(int i=a;i<=c;i++){
            if(i-a==c-i){
                flag=1;
                b=i;
                break;
            }
            else{
                continue;
            }
        }
        if(flag==1){
            cout<<b<<endl;
        }
        else{
            cout<<"-1"<<endl;
        }
    }
}