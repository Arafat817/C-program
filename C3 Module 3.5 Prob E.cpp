#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,mn=1;
    cin>>n;
    while(mn*2<=n)
    {
        mn*=2;
    }
    cout<<mn;
}
