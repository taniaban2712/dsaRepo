#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n{0}, comp{0};
        cin>>n;//the number of elements in the vector
        int a[n];
        int b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        for(int i=0;i<n;i++){
            if(i==0){
                if(a[i]>=b[i]){
                    comp++;
                }
            }
            else if(a[i]-a[i-1]>=b[i]){
                comp++;
            }
        }
        cout<<comp<<endl;
    }
}