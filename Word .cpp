#include<bits/stdc++.h>
using namespace std;
int main()
{
    int up=0,down=0;
    string ch;
    cin>>ch;
    for(int i=0;i<ch.size();i++)
    {
     if(ch[i]>='A' && ch[i]<='Z')
            up++;
     else
        down++;
    }
    if(up>down)
    {
    for(int i=0;i<ch.size();i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
            ch[i]=toupper(ch[i]);
    }
    cout<<ch<<endl;
    }
    if(up<down)
    {
        for(int i =0;i<ch.size();i++)
        {
            if(ch[i]>='A' && ch[i]<='Z')
                ch[i]=tolower(ch[i]);
        }
        cout<<ch<<endl;
    }
    if(up == down)
    {
        for(int i=0;i<ch.size();i++)
        {
            if(ch[i]>='A' && ch[i]<='Z')
                ch[i]=tolower(ch[i]);
        }
        cout<<ch<<endl;
    }
    return 0;
}
