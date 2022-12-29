#include<bits/stdc++.h>
using namespace std;

int num{0};

void call(int i, int n){
    if(i>n){
        return;
    }
    cout<<i<<endl;
    call(i+1,num);
}
int main(){
    cin>>num;
    call(1,num);
}