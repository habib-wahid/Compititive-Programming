#include<bits/stdc++.h>
using namespace std;
int sum =0 ;
int main()
{
    int matrix[5][5];
    int x;
    pair<int,int>ch;
    for(int i=0;i<5;i++)
    {
        for(int j=0;j<5;j++)
        {
            cin>>x;
            matrix[i][j]=x;
            if(x == 1)
            {
                ch.first = i;
                ch.second = j;
            }
        }
    }
    if(ch.first<2)
        sum = sum+(2-ch.first);
    if(ch.first>2)
        sum = sum +(ch.first-2);
    if(ch.second<2)
        sum = sum + (2-ch.second);
    if(ch.second>2)
        sum=sum+(ch.second-2);
    cout<<sum<<endl;
    sum=0;
    return 0;
}
