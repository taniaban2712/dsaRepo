#include<bits/stdc++.h>
#define ll long long int
using namespace std;

void solve(){
	ll n,m,x1,y1,x2,y2;
    cin>>n>>m>>x1>>y1>>x2>>y2;
    //if the cells are in the corner, then ans is 2
    //if the cells are in the middle, then ans is 4
    //if the cells are in the border, then ans is 3

    //corner case
    if((x2 == 1 || x2 == n) && (y2 == 1 || y2 == m)) cout<<2<<endl;
    else if((x1 == 1 || x1 == n) && (y1 == 1 || y1 == m)) cout<<2<<endl;


    //border case
    else if((x1 == 1 || x1 == n) && (1 < y1 && y1 < m)) cout<<3<<endl;
    else if((y1 == 1 || y1 == m) && (1 < x1 && x1 < n)) cout<<3<<endl;
    else if((y2 == 1 || y2 == m) && (1 < x2 && x2 < n)) cout<<3<<endl;
    else if((x2 == 1 || x2 == n) && (1 < y2 && y2 < m)) cout<<3<<endl;

    //anywhere in the middle
    else cout<<4<<endl;
}
int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    ll t;
    cin>>t;
    while(t--){
    solve();
    }
}