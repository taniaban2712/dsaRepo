#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int n{0},c{0}, num{0};
        cin>>n;
        num=n;
        while(n>0){
            int dig=n%10;
            if(num%dig==0){
                c++;
            }
            n/=10;
        }
        cout<<c<<endl;
    }
}