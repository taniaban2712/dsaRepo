#include<bits/stdc++.h>
using namespace std;
int main(){
    int n{0};
    int x{0};
    cin>>n;
    while(n--){
        string s="";
        cin>>s;
        if(s=="++X"||s=="X++"){
            x++;
        }
        else if(s=="--X"||s=="X--"){
            x--;
        }
    }
    cout<<x<<endl;
}