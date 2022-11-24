#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int counter=1;
    while(counter<n){//the array moves from first position to the end
        for(int i=0;i<n-counter;i++){//reducing the number of elements everytime.
            if(arr[i]>arr[i+1]){//if the element is greater than the next element
                int temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}