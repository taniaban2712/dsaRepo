#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t=0;
    cin>>t;
    while(t--){
        vector<int>v(4,0);
        for(int i=0;i<3;i++){
            cin>>v[i];
        }
        int alice=1,bob=1;
        v[0]--;
        int count=1;
        while(alice>0&&bob>0){
            if(v[0]>0){
                alice++;
                bob++;
                count++;
            }
            else if(v[1]>0){
                alice++;
                bob--;
                count++;
            }
            else if(v[2]>0){
                alice--;
                bob++;
                count++;
            }
            else if(v[3]>0){
                alice--;
                bob--;
                count++;
            }
        }
        cout<<count<<endl;
    }
}