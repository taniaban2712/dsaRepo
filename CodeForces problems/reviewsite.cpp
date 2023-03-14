#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        int n;//number of reviwers
        cin>>n;
        vector<int>s1(2,0),s2(2,0);
        while(n--){
            int a;
            cin>>a;
            if(a==1){
                if(s1[0]<s2[0]) s1[0]++;
                else s2[0]++;
            }
            else if(a==2){
                if(s1[1]<s2[1]) s1[1]++;
                else s2[1]++;
            }
            else{
                if(s1[0]>s2[0]||s1[1]<s2[1]) s1[0]++;
                else s2[0]++;
            }
        }
        cout<<s1[0]+s2[0]<<endl;
    }
}