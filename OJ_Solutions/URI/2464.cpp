#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    string s, ss;
    cin>>ss;
    cin>>s;
    for(int i = 0; s[i]; ++i)
        cout<<ss[s[i]-'a'];
    cout<<'\n';
}

