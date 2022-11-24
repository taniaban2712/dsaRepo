/*
Arithmetic subarrays.

It is when the diff of consecutive elements is the arrays are same. Find longest arithmetic subarray*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=2;
    int pd=arr[1]-arr[0];
    int j=2;
    int curr=2;

    while(j<n){
        if(pd==arr[j]-arr[j-1]){
            curr++;
        }
        else{
            pd=arr[j]-arr[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    /*for(int i=0;i<n;i++){
        int ap[n-i];
        for(int j=i;j<n-1;j++){
            ap.push(arr[j]);
        }
        for(int k=0;k<ap.size();k++){
            if
        }
    }*/
    return 0;
}

