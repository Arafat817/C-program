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
   // int req_row;
    int req_col;
    cin>>req_col;
  //  cin>>req_row;
    for(int i=0;i<row;i++)//for(int j=0;j<col;j++) upore req row nile loop a col theke coto nimu + j=column nimu
    {
       // cout<<a[req_row][j]<<" ";
        cout<<a[i][req_col]<<" ";
    }

}
