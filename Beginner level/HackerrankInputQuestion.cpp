#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    /*
    The program states that when the number is from 1 to 9 print the number in words. 
    When the number is greater than 10, then determine its even or odd and print message accordingly. */
    int a=0;
    int b=0;
    cin>>a;
    cin>>b;
    string num[]={" ","one","two","three","four","five","six","seven","eight","nine"};
    for(int i=a;i<=b;i++){
        if(i>=1||i<=9){
            cout<<num[i]<<endl;
        }
        else if(i%2==0){
                cout<<"even"<<endl;
            }
            else{
                cout<<"odd"<<endl;
            }
        }
    return 0;
}