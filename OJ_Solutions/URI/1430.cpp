#include <iostream>
#include <algorithm>
#define $ ios::sync_with_stdio(0);
using namespace std;

int main()
{$
    int v[50], soma,resp;
    v['W'-'A'] = 64; v['H'-'A'] = 32; v['Q'-'A'] = 16;
    v['E'-'A'] = 8; v['S'-'A'] = 4; v['T'-'A'] = 2;
    v['X'-'A'] = 1;
    string s;
    while(cin>>s && s[0]!='*')
    {
        soma = resp = 0;
        for(int i =1; i<(int)s.size(); ++i)
            if(s[i]=='/')
                soma = soma==64?resp++:0, soma = 0;
            else
                soma+=v[s[i]-'A'];

        cout<<resp<<endl;
    }
}
