#include<bits/stdc++.h>
using namespace std;
int main()
{
    char ch[101];
    cin>>ch;
    int counter=0;
    for(int i=1;i<strlen(ch)-1;i++)
    {
        counter++;
    }
    cout<<ch[0]<<counter<<ch[counter+1];
    return 0;
}
