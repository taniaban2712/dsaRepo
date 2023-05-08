#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        if(b>d)cout<<-1<<endl;
        else{
        int ans=0;
        ans+=b-d;
        a+=ans;
        if(a<c){
          cout<<-1<<endl;
        }
        else{
          ans+=abs(a-c);
          cout<<ans<<endl;
        }
    }
}
}