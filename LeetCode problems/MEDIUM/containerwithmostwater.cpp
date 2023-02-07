#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxArea(vector<int>& height) { 
        int i=0;
        int j=height.size()-1;
        int area=min(height[i],height[j])*(j-i); 
        while(i!=j){
            if(height[i]<height[j]){
                i++;
                if(height[i]>height[i-1]&&i!=j) area=max(area,min(height[i],height[j])*(j-i));
            }
            else{
                j--;
                if(height[j]>height[j+1]&&i!=j) area=max(area,min(height[i],height[j])*(j-i));
            }
        }
        return area;
    }
};