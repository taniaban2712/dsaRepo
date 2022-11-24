#include<bits/stdc++.h>
using namespace std;

int main(){
    unordered_set<int> s;//this is initialization of the unordered set
    array<int,5> arr;//initialisation of container array using stl

    /*generally array is initialised as
    
    int arr[5];
    
    but here we are using STL, so this initialises the container array, quite different from the normal array*/

    s.insert(3);//we are inserting element 3 to the first index of the array.
    
    //arr.fill(10); gives us the result as [10,10,10,10,10]
    //arr.fill(6); gives us the result as [6,6,6,6,6]

    arr.begin();//returns iterator to the begining of the array.
    arr.end();//moves the iterator to the end of the container array.

    for(int i=1;i<5;i++){
        s.insert(3);
    }

    //for printing the array

    for(int i=0;i<5;i++){
        cout<<arr.at(i)<<" ";//printing the entire array
    }

    s.count(2);//returns 1 if the element is present in the container otherwise 0.

    s.clear();//deletes all the elements

    s.find(2);//search an element in the unordered set and return its index.

    s.erase(0);//deletes a single element between a particular range.

    s.size();//returns the size of the unordered set.

    s.empty();//check if the unordered set is empty or not

    /*
    
    cbegin() – it refers to the first element of the unordered set.
    cend() – it refers to the theoretical element after the last element of the unordered set.
    bucket_size() – gives the total number of elements present in a specific bucket in an unordered set.
    emplace() – to insert an element in the unordered set.
    max_size() – the maximum elements an unordered_set can hold.
    max_bucket_count() – to check the maximum number of buckets an unordered set can hold
    
    */





}