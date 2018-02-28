#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    int n;
    cin>>n;
    string s;
    for (int i =0; i<n; ++i)
    {
        cin>>s;
        if(i)
            cout<<" ";
        if((int)s.size()!=3)
            cout<<s;
        else if(s[0]=='O' && s[1]=='B')
            cout<<"OBI";
        else if(s[0]=='U' && s[1]=='R')
            cout<<"URI";
        else
            cout<<s;

    }
    cout<<endl;
}

