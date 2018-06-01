#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <queue>
#include <sstream>
#define F first
#define S second
#define mp make_pair
#define eb emplace_back
#define oo 999999999
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<string, string> ii;
typedef vector<int> vi;
typedef vector<vi> graph;
graph g;
vi autor;
queue<int> f;
void bfs()
{
    int u;
    autor[0] = 0;
    f.push(0);
    while(!f.empty())
    {
        u = f.front(); f.pop();
        for(int v : g[u])
            if(!autor[v])
                f.push(v), autor[v] = autor[u]+1;
    }
}

int main()
{$
    int n, j=0, i =0;
    string s, z;
    stringstream ss;
    ii atual, erdos("Erdos","P.");
    map<ii, int> mapa;
    vi v;

    while(cin>>n && n)
    {
        autor.assign(120, 0);
        g.assign(120, vi());
        mapa.clear();
        mapa[erdos]=0;
        j = 0;

        getline(cin , s);

        while(n--)
        {
            getline(cin, s);
            v.clear();
            ss.clear();
            ss<<s;
            while(ss>>s>>z)
            {
                z.pop_back();
                atual = ii(z,s);

                if(mapa.find(atual)==mapa.end())
                    mapa[atual] = ++j;

                v.push_back(mapa[atual]);

            }

            int tam = (int)v.size();
            for(int k = 0; k<tam; ++k)
            {
                for(int h = k+1; h<tam ; ++h)
                {
                    g[v[k]].push_back(v[h]);
                    g[v[h]].push_back(v[k]);
                }
            }

        }

        bfs();
        cout<<"Teste "<<++i<<'\n';
        for(auto p : mapa)
        {
            if(p.F!=erdos)
            {
                cout<<p.F.S<<' '<<p.F.F<<": ";
                if(autor[p.S] == 0)
                    cout<<"infinito\n";
                else
                    cout<<autor[p.S] <<'\n';
            }

        }
        cout<<'\n';
    }
}

