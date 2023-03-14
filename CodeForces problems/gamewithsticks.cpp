#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    int i=0;
    while(n*m>0){
        i++;
        n--;
        m--;
    }
    if(i%2==1) cout<<"Akshat"<<endl;
    else cout<<"Malvika"<<endl;
}