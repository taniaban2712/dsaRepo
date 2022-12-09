#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n{0},x{0},c{0}, sum{0},a{0};
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if((x-arr[i])>c){
                arr[i]=x;
                a+=c;
            }
            sum+=arr[i];
        }
        cout<<sum-a<<endl;
    }
}