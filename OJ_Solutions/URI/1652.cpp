#include <iostream>
#include <map>
#include <vector>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
using namespace std;

int main()
{$
    map<string, string> mp;
    int n, m, tam;
    cin>>n>>m;
    string a, b;
    while(n--)
    {
        cin>>a>>b;
        mp[a]=b;
    }

    while(m--)
    {
        cin>>a;
        if(mp.find(a)!=mp.end())
            cout<<mp[a]<<"\n";
        else if((tam=(int)a.size())>=2 && a[tam-2]!='a' && a[tam-2]!='e' && a[tam-2]!='i' && a[tam-2]!='o' && a[tam-2]!='u' && a[tam-1]=='y')
        {
                for(int i = 0; i<tam-1; ++i)
                    cout<<a[i];
            cout<<"ies\n";
        }
        else if(a[tam-1]=='o' || a[tam-1]=='x' || a[tam-1]=='s' || (tam>=2 && a[tam-1]=='h' && (a[tam-2]=='c' || a[tam-2]=='s')))
            cout<<a<<"es\n";
        else
            cout<<a<<"s\n";
    }
}

