#include<iostream>
using namespace std;

int main(){
    int n=0;
    cout<<"Enter the length of the array"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];//entering the elements of the array
    }
    for(int i=0;i<n-1;i++){//going through the next element
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                int temp=arr[i];
                arr[i]=arr[j];//swapping
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}