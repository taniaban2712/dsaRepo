#include<bits/stdc++.h>
#define ll long long int
using namespace std;



int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    ll n,m, a,counth,countw;
    cin>>n>>m>>a;
    if(n%a!=0) counth=(n/a)+1;
    else counth=(n/a);
    if(m%a!=0) countw=(m/a)+1;
    else countw=(m/a);
    cout<<counth*countw<<endl;
}
 