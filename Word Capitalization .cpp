#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    cin>>ch;
    if(ch[0]>='a' && ch[0]<='z')
    {
         ch[0] = char(((int)ch[0])-32);

    }
     cout<<ch<<endl;
     return 0;
}
