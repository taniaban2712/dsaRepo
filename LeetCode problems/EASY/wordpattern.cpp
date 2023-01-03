#include<bits/stdc++.h>
using namespace std;

    void wordf(string s, vector<string>ds){
           
            string w="";
       
            for(int i=0;i<s.length();i++){
                char ch=s[i];
                if(s!=" "){
                    w+=s[i];
                }
                else{
                    ds.push_back(w);
                }
                w="";
            }
        }
   
         bool wordPattern(string pattern, string s) {
            vector<string>v;
            wordf(s,v);
            if(pattern.length()==s.length()){
             for(int i=0;i<pattern.length();i++){
                char ch=pattern[i];

                for(int j=i;j<pattern.length();j++){
                if(pattern.find(ch)==i){
                    if(pattern[i]==pattern[j]&&v[i]==v[j]){
                        return true;
                    }
                }
                else{
                    continue;
                }
                }
             }
            }
            else{
                return false;
            }
         }
         int main(){
            wordPattern("abba","dog cat cat dog");
         }
