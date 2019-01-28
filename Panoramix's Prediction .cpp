#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,i,p=0,a=0;
    cin>>n>>m;
    if(n == 2 && m == 3)
        cout<<"YES"<<endl;
        else if(m % 2 == 0)
            cout<<"NO"<<endl;
    else
    {
        i=n+2;
        if(i == m)
        {
            for(int k=3;k<=sqrt(m);k++)
            {
                if(m%k == 0)
                {
                    a=1;
                    break;
                }
            }
            if(a == 0)
                cout<<"YES"<<endl;
            else
                cout<<"NO"<<endl;
        }
        else
        {
        while(i<m)
        {
            for(int j =3;j<=sqrt(i);j=j+2)
            {
                if(i % j == 0)
                {
                    p=p+1;
                    break;
                }
            }
            if(p == 0)
                break;
            i=i+2;
            p=0;
        }
        if(i == m)
            cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
    }
    }
    return 0;
}
