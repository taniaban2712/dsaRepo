#include<bits/stdc++.h>
#define ll long long int
using namespace std;
bool isPalindrome(string str){
    int l=0;
    int h=str.length() - 1;
    while(h>l){
        if (str[l++] != str[h--])  return false;
    }
    return true;
}
int main(){
    ll t;
    cin>>t;
    while(t--){
        string s="";
        cin>>s;
        //string s1="";
        int n=s.size();
        int flag=0;
        //cout<<isPalindrome(s)<<endl;
        int m=s[0];
        for(int i=0;i<n;i++){
            if(s[i]==m) flag++;
        }
        if(flag==n) cout<<-1<<endl;
        else if(!isPalindrome(s)) cout<<s<<endl;
        else{
            sort(s.begin(),s.end());
            cout<<s<<endl;
        }
    }

}