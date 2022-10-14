#include<iostream>
using namespace std;
int main(){
    int n{0};
    int search, arr[n];
    bool flag=false;
    //entering te number of elements in the array.
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];//filling the array with inputs
  
    }
    cout<<"The array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"Enter the number to search"<<endl;
    cin>>search;//entering the element to be search
    for(int i=0;i<n;i++){
        if(arr[i]==search){
            flag=true;
            break;
        }
        else{
            continue;
        }
    }
    if(flag==true){
        cout<<"The search found"<<endl;
    }
    else{
        cout<<"The search found"<<endl;
    }

}