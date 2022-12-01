#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num,dig,count{0};
        cin>>num;
        while(num>0){
            dig=num%10;
            if(dig==4){
                count++;
            }
            num/=10;
        }
        cout<<count<<endl;
    }
}