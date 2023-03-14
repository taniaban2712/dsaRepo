#include<bits/stdc++.h>
using namespace std;
bool isdis(int n){
    int count=0;
    unordered_map<int,bool>m;
    while(n>0){
        if(m[n%10]) count=1;
        else{
            m[n%10]=true;
        }
        n/=10;
    }
    if(count!=0) return false;
    else return true;
}
int main(){
    int n;
    cin>>n;
    while(true){
        n++;
        if(isdis(n)) break;
    }
    cout<<n<<endl;
}