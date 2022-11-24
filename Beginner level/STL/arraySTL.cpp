#include<bits/stdc++.h>
using namespace std;

int main(){
    array<int,5> arr={1,3,4,5,7};

    //the maximum size of an int array inside int main() --->Same for double, char
    int a[1000000];//10^6

    //if declared globally, then max size of int array is 10^7  --->Same for double, char

    /* If a boolean array is declared in int main() then, max size is 10^7
       
       And if the array is declared in the global scope, then max size is 10^8

    */



    for(auto it= arr.begin(); it!=arr.end(); it++){
        cout<<*it<<" ";//for printing the element present in the array
    }

    for(auto it=arr.rbegin();it!=arr.rend();it++){
        cout<<*it<<" ";//printing the array elements in reverse order.
    }
    //another alternative approach.

    for(auto it=arr.end()-1;it>=arr.begin();it--){
        cout<<*it<<" ";
    }
    for(auto it:arr){//here "it" is the element in the array itself. 
        cout<<it<<" ";
    }//here the iterator it takes up the datatype int, as there is auto, automatically takes up the value.

    
}