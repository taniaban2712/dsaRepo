#include<bits/stdc++.h>
#include <cmath>
using namespace std;
int main()
{
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif*/
    int t{0};
    cin >> t;
    while(t--)
    {
        
        string bin="";
        int n{0};
        cin >> n;
        string arr[n];
        vector<int>v;
        map<string,bool> mp;
        for(int i=0;i<n;i++)
        {
            cin >> arr[i];
            mp[arr[i]] = true;
        }
        for(int i=0;i<n;i++)
        {
            bool flag = false;
            for(int j=1;j<arr[i].length();j++)
            {
                string pre = arr[i].substr(0,j);
                string suf = arr[i].substr(j,arr[i].length()-j);
                if(mp[pre] && mp[suf])
                {
                    flag = true;
                    break;
                }
            }
            if(flag==true){
                bin+='1';
            }
            else{
                bin+='0';
            }
        }
        
        cout<<bin<<"\n";
    }
    return 0;
}