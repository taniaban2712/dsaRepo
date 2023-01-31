#include<bits/stdc++.h>
using namespace std;
int main(){
    int k{0},r{0},count{1};
    cin>>k>>r;
    while(true){
        if(((count*k)-r)%10==0||(count*k)%10==0){
            break;
        }
        count++;
    }
    cout<<count<<endl;
}