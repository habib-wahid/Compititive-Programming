#include<bits/stdc++.h>
using namespace std;
int main()
{
    string first,sec,res;
    cin>>first;
    cin>>sec;
    for(int i=0;i<first.size();i++)
    {
        if(first[i] == sec[i])
            res.push_back('0');
        else
            res.push_back('1');
    }
    cout<<res<<endl;
    return 0;
}
