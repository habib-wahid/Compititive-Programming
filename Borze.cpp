#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch,ch1;
    cin>>ch;
    int i=0;
    while(i<ch.size())
    {
        if(ch[i] == '.')
        {
            ch1.push_back('0');
            i=i+1;
            continue;
        }
        if(ch[i]=='-' && ch[i+1] == '.')
        {
            i=i+2;
            ch1.push_back('1');
            continue;
        }
        if(ch[i]=='-' && ch[i+1]=='-')
        {
            i=i+2;
            ch1.push_back('2');
            continue;
        }
    }
    cout<<ch1<<endl;
    return 0;
}
