#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,a,b;
    char op;
    cin>>a>>op>>b;
    if(op=='+')
    {
        x=a+b;
    }
    else if(op=='-')
    {
        x=a-b;
    }
    cout<<x;
}
