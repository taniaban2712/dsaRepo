#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sp <<' '
#define E cout<<endl
#define ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
 
#define V(a) ll a;cin >> a
 
#define F(i, n) for (ll i = 0; i < n; i++)
#define N(n) for (n; n > 0; n--)
 
#define T V(t); N(t)
 
#define IA(a, n) for (ll i = 0; i < n; i++) cin>>a[i]
 
#define YN(f) cout << ((f) ? "YES" : "NO")
#define OA(a) for (auto x : a)cout << x sp;


#define tania void solve(void);int main(){ios solve();return 0;}void solve()

tania{
    T{
        ll n=0,m=0,summax=0,summin=0;
        cin>>n>>m;
        vector<ll>v;
        sort(v.begin(),v.end());
        IA(v,m);//entering the elements in the array(number of vacant seats in the plane)
        vector<ll>vmin=v;
        F(i,n){
            m=v[n-1];
            summax+=m;
            v[n-1]--;
            sort(v.begin(),v.end());
        }
        F(i,n){
            m=vmin[0];
            summin+=m;
            vmin[0]--;
            sort(vmin.begin(),vmin.end());
        }
        cout<<summax<<" "<<summin<<endl;
    }
}