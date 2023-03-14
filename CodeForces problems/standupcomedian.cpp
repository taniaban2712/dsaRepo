#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t=0;
    cin>>t;
    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;
        int ans=0;
        ans+=a;//part where both of them likes the joke.
        ans+=min(b,c)*2;//alice likes c jokes, while bob likes b jokes. 
        //so the max time they will like is minimum of b and c. and thts same for both, so multiplied by 2
        ans+=min(a+1,abs(b-c)+d);
        //the amount of time, they will start disliking, (b-c) disliked by either.
        if(a==0) cout<<1<<endl;
        else cout<<ans<<endl;  
    }
}