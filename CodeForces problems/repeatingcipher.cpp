    #include<bits/stdc++.h>
    #define ll long long int
    using namespace std;
    int main(){
            ll n,i=0,count=0;
            cin>>n;
            string s="",w="";
            cin>>s;
            while(i!=n){
                w+=s[i];
                count++;
                i+=count;
            }
            cout<<w<<endl;
    }