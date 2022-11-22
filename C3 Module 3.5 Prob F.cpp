#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum=0;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort (arr,arr+n);
    reverse(arr,arr+n);
    for(int i=0;i<x;i++)
    {
        sum+=arr[i];
    }
    cout<<sum;
}
