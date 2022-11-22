#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a,b,c;
    cin>>a>>b>>c;
    char m=a.back();
    char n=b.front();
    char p=b.back();
    char q=c.front();
    if(m==n && p==q)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
