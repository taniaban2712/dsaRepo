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

    vector<int>vec1(4,0);//--->this results in {0,0,0,0}
    vector<int>vec2(4,10);//--->this results in {10,10,10,10}

    //if we wanna create a vec3, and create it as a copy of vec2

    vector<int>vec3(vec2.begin(),vec2.end());//this creates a copy
    //ALTERNATIVE
    vector<int>vec4(vec2);

    //defining a 2D vector

    vector<vector<int>>vec;
    vector<vector<int>>vec(10,vector<int>vec(20,0));//this defines 20 vectors with 0 within 10 vectors

    //for defining a 3D Vector

    vector<vector<vector<int>v(10,vector<vector<int>>v(20,vector<int>v(30,0)));




    

}
