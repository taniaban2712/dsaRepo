#include<iostream>
using namespace std;

int binarySearch(int n,int arr[],int key){
    int s=0;
    int e=n;//the size of the array
    while(s<=e){
        int mid=(s+e)/2;//the middle position of the array
        if(arr[mid]==key){
            return mid;//if the element found in the middle
        }
        else if(arr[mid]>key){
            e=mid-1;//reducing the end point
        }
        else{
            s=mid+1;//increasing the starting point
        }
    }
    return -1;
}
int main(void){
    int num,s;
    cout<<"Enter the number of elements"<<endl;
    cin>>num;
    int a[num];
    cout<<"Entering the elements in the array"<<endl;
    for(int i=0;i<num;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to be search"<<endl;
    cin>>s;
    cout<<binarySearch(num,a,s)<<endl;
    return 0;
}