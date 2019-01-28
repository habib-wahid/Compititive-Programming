#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    vector<int>ve;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int u,v,a,b;
        cin>>u>>v;
        a=v-u;
        if(i == 0)
        {
            ve.push_back(a);
        }
        else
        {
            b=a+ve[i-1];
            ve.push_back(b);
        }
    }
    int x=ve[0];
    for(int i=1;i<ve.size();i++)
    {
        if(ve[i]>x)
            x=ve[i];
    }
    cout<<x<<endl;
    return 0;
}
