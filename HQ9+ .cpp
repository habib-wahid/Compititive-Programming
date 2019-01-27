#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    int p=0;
    cin>>ch;
    for(int i = 0;i<ch.size();i++)
    {
        if(ch[i]== 'H' || ch[i] == 'Q' || ch[i]=='9'||ch[i]=='+' )
        {
            p=p+1;
            break;
        }
    }
    if(p==1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}
