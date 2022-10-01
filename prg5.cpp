#include<iostream>
using namespace std;
int main(){
    int a=0;
    cin>>a;
    int sum=0;
    while(a>0){
        sum+=a%10;
        a=a/10;
    }
    cout<<sum;
}