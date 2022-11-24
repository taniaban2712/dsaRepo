/* This is a Google Kickstart problem. RECORD BREAKING*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    //int rec=0;
    int recno=0;
    int curr=0;
    for(int i=0;i<n;i++){
        if(arr[0]>arr[1]){
            recno++;
        }
        else if(arr[n-1]>arr[n-2]){
            recno++;
        }
        else{
            if(arr[i]>arr[i-1]&&arr[i]>arr[i+1]){
                recno++;
            }
        }
    }
    cout<<recno<<endl;
}