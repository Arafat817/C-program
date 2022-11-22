#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    if(n>k)
    {
        int a=k*x;
        int b=(n-k)*y;
        int total=a+b;
        cout<<total;
    }
    else
    {
        cout<<n*x;
    }
}
