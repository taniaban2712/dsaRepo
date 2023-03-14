#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define END cout<<endl;
#define ios ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);

int main(){
    ios;
    unordered_map<char,int> map;
	int n;
	string st;
	cin>>n;
	cin>>st;
	
	int ans=0;
	for(int i=1;i<st.length();i=i+2){
		map[st[i-1]]++;
		char temp = tolower(st[i]);		
		if(temp==st[i-1]){
			map[temp]--;
			continue;
		}
		if(map[temp]>0){
			map[temp]--;
			continue;
		}
		ans++;
	}
	cout<<ans;
    END
}