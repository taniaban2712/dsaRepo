#include<bits/stdc++.h>
using namespace std;

void call(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    call(n-1);
}

int main(){
    int num{0};
    cin>>num;
    call(num);
}