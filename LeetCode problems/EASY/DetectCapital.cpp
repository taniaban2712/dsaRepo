#include<bits/stdc++.h>
using namespace std;


bool detectCapitalUse(string word) {
        bool flag=true;
        if(isupper(word[0])){
            for(int i=1;i<word.length();i++){
                char ch=word[i];
                if(isupper(ch)){
                    flag=true;
                }
                else{
                    for(int j=i+1;j<word.length();j++){
                        if(isupper(word[j])){
                            flag=false;
                            break;
                        }
                    }
                }
            }
        }
        else{
            for(int i=0;i<word.length();i++){
                char ch=word[i];
                if(!islower(ch)){
                    flag=false;
                }
            }
        }
        return flag;
    }
int main(){
    string w="";
    cin>>w;
    cout<<detectCapitalUse(w);
    
}