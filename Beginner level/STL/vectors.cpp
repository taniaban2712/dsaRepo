#include <bits/stdc++.h>
using namespace std;

int main(){

    //Vector are dynamic arrays that have the ability to change size whnever the element is deleted or added to it.
    vector<int>v1;//initialising a vector
    
    //initially that upper statement has value as {}
    v1.push_back(0);//--->{0}
    v1.push_back(2);//--->{0,2}

    v1.pop_back();//removes 2 from the vector. remaining is {0}

    //if we push_back more than 10^7 then we get SEGMENTATION ERROR

    v1.clear();//clears all elements.

    vector<int>vec(4,0);//--->this results in {0,0,0,0}

    

}
