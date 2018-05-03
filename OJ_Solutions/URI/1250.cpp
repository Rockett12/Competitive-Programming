#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{
    string s, ss;
    int t, n, m;
    char x;

    cin>>t;
    while(t--)
    {
        m = 0;
        cin>>n;
        getline(cin, s);
        getline(cin, s);
        getline(cin, ss);
        for(int i = 0, j=0; (x = ss[i]); ++i, j+=2)
            if(x == 'S' && s[j]<='2' || x == 'J' && s[j]>'2')
                ++m;

        cout<<m<<'\n';

    }
}

