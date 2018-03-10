#include <iostream>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
using namespace std;
int main()
{$
    string a, s;
    int t, b;
    cin>>t;
    while(t--)
    {
        cin>>b>>s;
        b = 0;
        a = s;
        sort(s.begin(), s.end());

        for(int i = 0; i<(int)s.size(); ++i)
            if(a[i]!=s[i])
            ++b;
        if(b>2)
            cout<<"There aren't the chance.\n";
        else
            cout<<"There are the chance.\n";
    }
}

