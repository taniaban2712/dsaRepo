#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool detectCapitalUse(string word) {
        int up{0};
        if(isupper(word[0])){
            for(int i=1;i<word.length();i++){
                if(isupper(word[i])){
                    up++;
                }
            }
            if(up==0||up==word.length()-1){
                return true;
            }
            else{
                return false;
            }
        }
        else{
            for(int i=1;i<word.length();i++){
                if(isupper(word[i])){
                    up++;
                }
            }
            if(up==0){
                return true;
            }
            else{
                return false;
            }
        }
    }
};