#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n{0},x{0},count{0};
    cin>>n>>x;
    while(n--){
        char c=' ';
        long long int m{0};
        cin>>c>>m;
        if(c=='+'){
            x+=m;
        }
        else{
            if(x>=m){
                x-=m;
            }
            else{
                count++;
            }
        } 
    }
    cout<<x<<" "<<count<<endl;
}