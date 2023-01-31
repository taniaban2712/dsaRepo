#include<bits/stdc++.h>
using namespace std;
int main(){
    int t{0};
    cin>>t;
    while(t--){
        int w{0},h{0},n{0},count{0};
        cin>>w>>h>>n;
        while(h>0&&w>0){
            if(w%2==0&&h%2==0){
                w/=2;
                count+=2;
            }
            else if(w%2==0&&h%2!=0){
                w/=2;
                count++;
            }
            else if(h%2==0&&w%2!=0){
                h/=2;
                count++;
            }
            else{
                continue;
            }
        }
        if(count>=n){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
}