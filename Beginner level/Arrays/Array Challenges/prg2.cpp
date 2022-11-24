// the number of subarrays in an array with n elements= nC2+n=n*(n+1)/2
// subarrays are the continous part of an array

// find the sum of all subarrays
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;
    int t=0;
    for (int i = 0; i < n; i++)
    {
        sum=0;
        for (int j = i;j < n; j++)
        {
            sum += arr[j];
            //t+=sum;
            //cout<<arr[j];
            cout<<"sum"<<sum<<endl;
        }
        
    } //cout<<t<<endl;

}