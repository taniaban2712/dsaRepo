#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll n, sum=0;
    //we need to take a string of number.
    cin>>n;
    string initial="",final="";
    cin>>initial>>final;
    for(int i=0;i<n;i++){
        sum+=min(abs(initial[i]-final[i]),10-abs(initial[i]-final[i]));
        //cout<<min(abs(dig1-dig2),10-abs(dig1-dig2))<<endl;
    }     
    cout<<sum<<endl;

}