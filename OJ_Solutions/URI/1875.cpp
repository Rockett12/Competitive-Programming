#include <cstdio>
#include <map>
#include <iostream>
#define $ ios::sync_with_stdio(0);
using namespace std;
int v[100];
int main()
{$
    map<char,int> mp;
    mp['G'] = 0;
    mp['B'] = 1;
    mp['R'] = 2;

    char x, y;
    int n, m, r, g, b;
    cin>>n;
    while(n--)
    {
        cin>>m;
        v['R']=v['B'] = v['G'] =0;
        while(m--)
        {
            cin>>x>>y;
            if(mp[y]==(mp[x]+1)%3)
                v[x]+=2;
            else
                v[x]++;
        }

        if(v['R']== v['B'] && v['B']==v['G'])
            cout<<"trempate"<<endl;
        else if(v['R']>v['B'] && v['R']>v['G'])
            cout<<"red\n";
        else if(v['G']>v['B'] && v['R']<v['G'])
            cout<<"green\n";
        else if(v['B']> v['R'] && v['B']>v['G'])
            cout<<"blue\n";
        else
            cout<<"empate\n";
    }
}

