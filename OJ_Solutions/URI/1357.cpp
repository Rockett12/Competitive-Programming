#include <iostream>
#include <map>
#define $ ios::sync_with_stdio(0);
using namespace std;
int mapper1[]={0,1,1,2,2,1,2,2,1,0};
int mapper2[]={2,3,1,3,0,0,1,2,2,1};
int main()
{$
    string line[] = {".*","*.", "**", ".."}, s, ss, sss;
    map<string, int> mp;

    mp["*..."]=1;
    mp["*.*."]=2;
    mp["**.."]=3;
    mp["**.*"]=4;
    mp["*..*"]=5;
    mp["***."]=6;
    mp["****"]=7;
    mp["*.**"]=8;
    mp[".**."]=9;
    mp[".***"]=0;

    int t;
    char x;
    while(cin>>t && t)
    {
        cin>>x;
        if(x=='S')
        {
            cin>>s;
            cout<<line[mapper1[s[0]-'0']];
            for(int i = 1; i<t; ++i)
                cout<<' '<<line[mapper1[s[i]-'0']];
            cout<<'\n';

            cout<<line[mapper2[s[0]-'0']];
            for(int i = 1; i<t; ++i)
                cout<<' '<<line[mapper2[s[i]-'0']];
            cout<<'\n';

            cout<<line[3];
            for(int i = 1; i<t; ++i)
                cout<<' '<<line[3];
            cout<<'\n';
        }
        else
        {
            getline(cin, s);
            getline(cin, s);
            getline(cin, ss);
            getline(cin, sss);

            for(int i = 0; i<(int)s.size(); i+=3)
            {
                sss = "";
                sss += s[i];
                sss += s[i+1];
                sss += ss[i];
                sss += ss[i+1];
                cout<<mp[sss];
            }
            cout<<'\n';
        }
    }
}

