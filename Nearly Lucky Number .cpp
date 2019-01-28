#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    int sum=0,a,p=0,k=0,g=1;
    cin>>st;
    for(int i=0;i<st.size();i++)
    {
        if(st[i] == '4' || st[i] == '7')
            sum=sum+1;
    }
    if(sum == 0)
        {
             g=0;


        }
    while(sum>0)
    {
        a=sum%10;
        sum=sum/10;
        p=p+1;
        if(a == 4 || a== 7)
        {
            k=k+1;
        }

    }
    if(p==k && g == 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

    return 0;
}
