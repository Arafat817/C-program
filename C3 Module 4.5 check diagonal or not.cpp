#include<bits/stdc++.h>
using namespace std;
int main()
{
    int row,col,i,j;
    cin>>row>>col;
    int a[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cin>>a[i][j];
        }
    }
    if(row!=col)
    {
        cout<<"No";
        return 0;
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(i==j)
            {
                continue;
            }
            if(a[i][j]>0)
            {
                cout<<"No";
                return 0;
            }
        }
    }
    cout<<"Yes";


}
