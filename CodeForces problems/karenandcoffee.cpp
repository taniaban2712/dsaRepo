#include<bits/stdc++.h>
#define ll long long int
using namespace std;
int arr[200005];
int main(){
    ll n,k,q;
    cin>>n>>k>>q;
    while(n--){
        int l=0,r=0;
        cin>>l>>r;
        arr[l]++;
        arr[r+1]--;
    }
    for(int i=1;i<200005;i++){
        arr[i]+=arr[i-1];//prefix sum array
    }
    for(int i=0;i<200005;i++){
        if(arr[i]>=k) arr[i]=1;//this is converting it in an array having frequency of the number of values at which it is at least k
        else arr[i]=0;//here, the condition is not fulfilled.
    }
    for(int i=1;i<200005;i++){
        arr[i]+=arr[i-1];//prefix sum to accumulate the frequency
    }
    while(q--){
        int l=0,r=0;
        cin>>l>>r;
        cout<<arr[r]-arr[l-1]<<endl;//the difference between the range.
    }
}