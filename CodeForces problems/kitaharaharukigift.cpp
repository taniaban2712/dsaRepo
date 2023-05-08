#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,sum=0;
    cin>>n;
    int countone=0,counttwo=0;
    while(n--){
        int a;
        cin>>a;
        sum+=a;
        if(a==100) countone++;
        else counttwo++;
    }
    //cout<<sum<<'\n';
    if(sum%200!=0)    cout<<"NO"<<endl;
    else{
        int n=counttwo%2;
        int m=countone-n*2;
        //cout<<m<<" "<<n<<endl;
        if(m>=0&&m%2==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;

    }
}