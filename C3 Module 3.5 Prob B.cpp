#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[100000];
    cin>>s;
    for(int i=1;i<=strlen(s);i+=2)
    {
        if(i%2!=0)
           {
               cout<<s[i-1];
           }
    }
}

