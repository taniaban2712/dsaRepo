#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n{0};
    cin>>n;
    while(n!=1){
        cout<<n<<" ";
        if(n%2==0){
            n/=2;
        }
        else{
            n=3*n+1;
        }
        
    }
}