
//using two pointers


#include<bits/stdc++.h>
using namespace std;

int a[5];

void f(int l,int m){
    if(l>=m){
        return;
    }
    swap(a[l],a[m]);
    f(l+1,m-1);
}
int main(){
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    f(0,4);
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
}



//using single pointer

#include<bits/stdc++.h>
using namespace std;

int a[5];

void f(int i){
    if(i>=3){
        return;
    }
    swap(a[i],a[5-i-1]);
    f(i+1);
}
int main(){
    for(int i=0;i<5;i++){
        cin>>a[i];
    }
    f(0);
    for(int i=0;i<5;i++){
        cout<<a[i]<<endl;
    }
}


