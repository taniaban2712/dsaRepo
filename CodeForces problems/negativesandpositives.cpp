#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int neg=0;
        int mn=INT_MAX;
        ll sum=0;
        for(int i=0;i<n;i++){
            if(a[i]<0)neg++;
            mn=min(mn,abs(a[i]));
            sum+=abs(a[i]);
        }
        if(neg&1){
            sum-=(2*mn);
        }
    cout<<sum<<'\n';
    }
}

