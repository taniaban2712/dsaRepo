#include<iostream>
using namespace std;

//find the maimum element in the array given
int main(){
    int n;
    cin>>n;
    int arr[n];
    //enter the elements
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];//there might be negative numbers
    for(int i=0;i<n;i++){
        if(arr[i]>=max){
            max=arr[i];
        }
    }
    cout<<"The max element is:"<<max<<endl;
}